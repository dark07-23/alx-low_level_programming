#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text content to append.
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
		int fd, w, len = 0;

			if (filename == NULL)
						return (-1);

				if (text_content != NULL)
							len = strlen(text_content);

					fd = open(filename, O_WRONLY | O_APPEND);
						if (fd == -1) {
									perror("Error opening file");
											return (-1);
												}

							w = write(fd, text_content, len);
								if (w == -1) {
											perror("Error writing to file");
													close(fd);
															return (-1);
																}

									close(fd);

										return (1);
}

