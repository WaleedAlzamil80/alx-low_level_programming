#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | IROTH)

/**
 * main - program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (1) on success (0) on failure
 */

int main(int argv, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	form_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
                dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	while ((b = read(from_fd, buffer, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buffer, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (b == -1)
                dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprint(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (to_fd)
                dprint(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
	return (EXIT_SUCCESS);
}
