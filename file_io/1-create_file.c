#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: filename
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, taille = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (taille = 0; text_content[taille]; taille++)
		{
			;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, taille);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
