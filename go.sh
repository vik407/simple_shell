#!/usr/bin/env bash

for i in shell.c
do
	echo "Que Dios nos coja confesados!"
	#gcc -Wall -Werror -Wextra -pedantic *.c -o hsh && valgrind --leak-check=full --show-leak-kinds=all ./hsh
	gcc -Wall -Werror -Wextra -pedantic *.c -o hsh && ./hsh
done