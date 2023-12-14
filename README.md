<h1 align="center">
  0x16. C - Simple Shell
</h1>

<p align="center">
   📄 🚀
</p>

<p align="center">
  <strong>
   Description
  </strong>
</p>

<p align="center">
This project serves as the realization of a shell, crafted as a pivotal venture within the C programming domain at ALX Africa Software Engineering. </br>
Delving into the shell's intricacies during the initial trimester, it illuminates advanced concepts like processes, system calls, bit manipulation, file management, and error handling. </br>
Aiming to replicate the functionalities of the simple shell (sh), this UNIX command interpreter is meticulously written in the C language.
</p>

## COPYRIGHT
Copyright (C) 2022 by [**Michael Ahere**](https://github.com/odongoahere) </br>
All rights reserved

 ## Description :
This is a coded in [C](https://en.wikipedia.org/wiki/C_(programming_language)).
This originates from work done on [the Thompson Shell](http://www.src.wits.ac.za/groups/psi/linux/rhl-gsg-en-8.0/s1-managing-shells.html).

## Environment :

Our shell was built and tested on a version of Ubuntu.

## Features
*Display a prompt and await user input for command execution, with each command line concluding with a new line.
*In the event of an executable absence, print an error message and prompt the user again.
*Comprehensive error handling.
*Manage the “end of file” condition (Ctrl+D).
*Process command lines with arguments.
*Effectively handle the PATH.
*Implement support for exit features and exit status.
*Prevent the shell from terminating on Ctrl-C.
*Handle command separators ;.
*Manage && and || logical operators.
*Support variable replacements $? and $$.
*Accommodate comments #.
*Incorporate history feature support.
*Enable file input support.

## Builtins
This shell has support for the following built-in commands:

| Command             | Definition                                                                                |
| ------------------- | ----------------------------------------------------------------------------------------- |
| exit [n]            | Exit the shell, with optional exit status, n.                                             |
| env                 | Print environment.                                                                        |
| setenv [var][value] | Set environment variable and value. If the variable exists, the value will be updated.    |
| alias[name[='value]]| Reads an alias name                                                                       |
| unsetenv [var]      | Remove environment variable                                                               |
| cd [dir]            | Change directory                                                                          |
| help [built-in]     | Read documentation for a built-in                                                         |


 ## Installation : Getting HSH
 
Clone this repository and compile the files into an executable using the GCC compiler.
```
https://github.com/odongoahere/simple_shell
```

### Basic usage :bulb:
- Fork the Repository [Learn how to fork repo](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo).
- Clone [Learn how to clone ](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository).
- Create an executable by running the following command:
- `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- From there, type in the following command and press your enter button.
- `./hsh`


## Example :computer:
```
ls -la
```
![114757753-e50c2180-9d64-11eb-95ea-fb9bba776c8c](https://user-images.githubusercontent.com/57016982/186711943-65abad4d-eedf-4d65-947d-3710e189bdee.png)

## Contributors :
* [**Mike Ahere**](https://github.com/odongoahere)

## Acknowledgments :
-Blood
-Sweat
-Tears
