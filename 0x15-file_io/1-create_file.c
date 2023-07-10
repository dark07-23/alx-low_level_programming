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
		int fd, w, len = 0;

			if (filename == NULL)
						return (-1);

				if (text_content != NULL)
							len = strlen(text_content);

					fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
						if (fd == -1) {
									perror("Error creating file");
											return (-1);
												}

							if (len > 0) {
										w = write(fd, text_content, len);
												if (w == -1) {
																perror("Error writing to file");
																			close(fd);
																						return (-1);
																								}
													}

								close(fd);

									return (1);
}

