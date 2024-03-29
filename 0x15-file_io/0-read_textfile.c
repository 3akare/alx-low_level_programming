#include "main.h"

/**
 * read_textfile - read a text file and print to the POSTIX
 * standard output
 * @filename: the name of the file to be printed
 * @letters: number of letters to be printed
 *
 * Return: the length that was actually printed out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
