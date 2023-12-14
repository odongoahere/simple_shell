#include "shell.h"

/**
 * _myexit - Exits the shell.
 * @info: Structure containing potential arguments.
 * Return: Exits with a given exit status (0) if info->argv[0] != "exit".
 */
int _myexit(info_t *info)
{
	int exitcheck;

	if (info->argv[1])  /* If there is an exit argument */
	{
		exitcheck = _erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return 1;
		}
		info->err_num = exitcheck;
		return -2;
	}
	info->err_num = -1;
	return -2;
}

/**
 * _mycd - Changes the current directory of the process.
 * @info: Structure containing potential arguments.
 * Return: Always 0.
 */
int _mycd(info_t *info)
{
	char *dir, buffer[1024];
	int chdir_ret;

	char *current_directory = getcwd(buffer, 1024);
	if (!current_directory)
		_puts("TODO: >>getcwd failure emsg here<<\n");

	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(current_directory);
			_putchar('\n');
			return 1;
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);

	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	}
	return 0;
}

/**
 * _myhelp - Displays help information (not yet implemented).
 * @info: Structure containing potential arguments.
 * Return: Always 0.
 */
int _myhelp(info_t *info)
{
	(void)info;  /* Silence unused parameter warning */
	_puts("help call works. Function not yet implemented\n");
	return 0;
}
