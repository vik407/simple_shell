#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Misc Includes */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <wait.h>

/* Shell */
#define BUFFER_SIZE 64
char *_strdup(char *str);
int _putchar(char c);
void _puts(char *str);
int _strncmp(char *s1, char *s2, int n);
char *_PATH(char **envp);
char *_getenv(char *var, char **envp);

/* Shell prototypes */
void hi();
void prompt();
char *read_line(void);
char **tokenizer(char *read_line);
int run_execve(char **tokens, char **envp);
char *run_flag(char *app, char **envp);



#endif
