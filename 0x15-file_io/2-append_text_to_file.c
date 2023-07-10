#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: the string
 *
 * Return: integre length of string
 */

int _strlen(char *s)
{
	int  i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content to be written
 *
 * Return: (1) on success and (-1) otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fOpen;
	ssize_t num_bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fOpen = open(filename, O_WRONLY | O_APPEND);
	if (fOpen == -1)
		return (-1);
	if (len)
		num_bytes = write(fOpen, text_content, len);
	close(fOpen);
	return (num_bytes == len ? 1 : -1);
}
