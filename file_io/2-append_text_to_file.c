#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: content of the text
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, taille = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (taille = 0; text_content[taille]; taille++)
		{
			;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, taille);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
