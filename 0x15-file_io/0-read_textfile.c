#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters to read
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fOpen;
	ssize_t num_bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fOpen = open(filename, O_RDONLY);
	if (fOpen == -1)
		return (0);
	num_bytes = read(fOpen, &buffer[0], letters);
	num_bytes = write(STDOUT_FILENO, &buffer[0], num_bytes);
	close(fOpen);
	return (num_bytes);
}
