#include "../holberton.h"

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	my_ppid = getppid();
	printf("Parent: %u - Child: %u\n", my_ppid, my_pid);
	return (0);
}
