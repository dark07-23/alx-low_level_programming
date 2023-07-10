#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *  * read_textfile - Read a text file and print its contents to STDOUT.
 *   * @filename: Name of the text file to be read.
 *    * @letters: Number of characters to read from the file.
 *     * Return: The number of bytes written to STDOUT, or 0 on failure.
 *      */
ssize_t read_textfile(const char *filename, size_t letters)
{
		char *f = NULL;
			ssize_t d, t, w;

				if (filename == NULL)
							return 0;

					d = open(filename, O_RDONLY);
						if (d == -1) {
									perror("Error opening file");
											return 0;
												}

							f = malloc(sizeof(char) * (letters + 1));
								if (f == NULL) {
											perror("Memory allocation failed");
													close(d);
															return 0;
																}

									t = read(fd, f, letters);
										if (t == -1) {
													perror("Error reading file");
															free(f);
		close(d);
																			return 0;
																				}

											w = write(STDOUT_FILENO, f, t);
												if (w == -1) {
															perror("Error writing to STDOUT");
	free(f);
					close(d);
																					return 0;
																						}

													free(f);
														close(d);

															return w;
}

