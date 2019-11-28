# Simple Shell

![Alt text](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

Simple UNIX command interpreter..

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Requirements

General

```llowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to 
```

### Authorized functions and macros

- **``access``** (man 2 access)
- **``chdir``** (man 2 chdir)
- **``close``** (man 2 close)
- **``closedir``** (man 3 closedir)
- **``execve``** (man 2 execve)
- **``exit``** (man 3 exit)
- **``_exit``** (man 2 _exit)
- **``fflush``** (man 3 fflush)
- **``fork``** (man 2 fork)
- **``free``** (man 3 free)
- **``getcwd``** (man 3 getcwd)
- **``getline``** (man 3 getline)
- **``isatty``** (man 3 isatty)
- **``kill``** (man 2 kill)
- **``malloc``** (man 3 malloc)
- **``open``** (man 2 open)
- **``opendir``** (man 3 opendir)
- **``perror``** (man 3 perror)
- **``read``** (man 2 read)
- **``readdir``** (man 3 readdir)
- **``signal``** (man 2 signal)
- **``stat (__xstat)``** (man 2 stat)
- **``lstat (__lxstat)``** (man 2 lstat)
- **``fstat (__fxstat)``** (man 2 fstat)
- **``strtok``** (man 3 strtok)
- **``wait``** (man 2 wait)
- **``waitpid``** (man 2 waitpid)
- **``wait3``** (man 2 wait3)
- **``wait4``** (man 2 wait4)
- **``write``** (man 2 write)

## Compilation

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

### Testing

Your shell should work like this in interactive mode:

```sh
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode:

```sh
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## File Descriptions 
| Filename | Funtions | Description | 
| ------------- | ------------- | ------------ |
| 0x0-funtions_syscalls.c | | |
| 0x1-funtions_syscalls.c | | |
| | _putchar | writes the character c to stdout. |
| | *_strdup | function that returns a pointer to a newly allocated space in. |
| | _strncmp | function that compares two strings. |
| | _puts | prints a string, followed by a new line, to stdout |
| 1-read_line.c | *read_line  | get the user input |
| 2-execve.c | run_execve | execute an app from the user input |
| | *run_flag | search if application exists in the PATH |
| | *_getenv | function that return a desired env info |
| 3-tokenizer.c | tokenizer | create tokens by designed separator |
| 4-free | free_double | iterates liberating a double pointer |
| holberton.h | library | |
| man_1_simple_shell | shell manual | |

### Built-ins
| Command | Description |
| ------------- |:-------------:|
| env | prints the environment |
| exit | exits with status 0 |
| ctrl-d | exits with status 0 |

# Authors

* **Victor Hernandez**
* **Juan David Davalos** 
