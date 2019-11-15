#include "../holberton.h"

/*
 * main - Get the max pid
 * Return: 0 on success
 */
int main(void)
{
	int rd, wr, fd, cl;
	char buf[100];

	fd = open("/proc/sys/kernel/pid_max", O_RDONLY);
	if (fd == -1)
		exit(99);

	rd = read(fd, buf, 100);
	if (rd == -1)
		exit(99);

	wr = write(1, buf,  rd);
	if (wr == -1)
		exit(99);

	cl = close(fd);
	if (cl == -1)
		exit(99);

	return (0);
}
