#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - Copies the contents of one file to another file.
 * @src: Source file name.
 * @dest: Destination file name.
 * Return: On success, 0. On failure, -1.
 */
int copy_file(const char *src, const char *dest)
{
		int fd_src, fd_dest, bytes_read, bytes_written;
			char buffer[BUFFER_SIZE];

				if (src == NULL || dest == NULL)
							return -1;

					fd_src = open(src, O_RDONLY);
						if (fd_src == -1) {
									perror("Error opening source file");
											return -1;
												}

							fd_dest = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
								if (fd_dest == -1) {
											perror("Error opening destination file");
													close(fd_src);
															return -1;
																}

									while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) > 0) {
												bytes_written = write(fd_dest, buffer, bytes_read);
														if (bytes_written == -1) {
																		perror("Error writing to destination file");
																					close(fd_src);
																								close(fd_dest);
																											return -1;
																													}
															}

										if (bytes_read == -1) {
													perror("Error reading source file");
															close(fd_src);
																	close(fd_dest);
																			return -1;
																				}

											close(fd_src);
												close(fd_dest);

													return 0;
}

