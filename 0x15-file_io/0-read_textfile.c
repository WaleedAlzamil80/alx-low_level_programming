#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the file name in the same directory.
 * @letters: the number of letters it should read and print.
 *
 * Return: 0 if it can't open the file or the file name is NULL
 * other wise it retuen the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
