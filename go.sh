#!/usr/bin/env bash

for i in shell.c
do
	echo "gcc -Wall -Werror -Wextra -pedantic *.c -o hsh"
	#gcc -Wall -Werror -Wextra -pedantic *.c -o hsh && valgrind -v ./hsh
	gcc -Wall -Werror -Wextra -pedantic *.c -o hsh && ./hsh
done