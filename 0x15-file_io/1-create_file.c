#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Name of the file to create.
 * @text_content: Text content to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */

int create_file(const char *filename, char *text_content)
{
		int k, l, n = 0;

			if (filename == NULL)
						return (-1);

				if (text_content != NULL)
						{
									for (n = 0; text_content[n];)
													n++;
										}

					k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
						l = write(k, text_content, n);

							if (k == -1 || l == -1)
										return (-1);

								close(k);

									return (1);
}

