#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *mem;

	if (filename == NULL)
	{
		return (0);
	}

	mem = malloc(sizeof(char) * letters);
	if (mem == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, mem, letters);
	w = write(STDOUT_FILENO, mem, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(mem);
		return (0);
	}

	free(mem);
	close(o);

	return (w);
}
