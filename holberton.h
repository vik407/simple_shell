#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Misc Includes */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <wait.h>

/* Shell */
#define BUFFER_SIZE 64

/* Shell prototypes */
char *read_line(void);
char **tokenizer(char *read_line);

#endif
