#include "main.h"

/**
 * append_text_to_file - appends text at the eof
 * @filename: name of file
 * @text_content: content
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlet;
	int i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;
		i = write(fd, text_content, nlet);
		if (i == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
