#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Read a text file and print its contents to STDOUT.
 * @filename: Name of the text file to be read.
 * @letters: Number of characters to read from the file.
 * Return: The number of bytes written to STDOUT, or 0 on failure.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
		char *f;
			ssize_t d;
				ssize_t w;
					ssize_t t;

						d = open(filename, O_RDONLY);
							if (d == -1)
										return (0);
								f = malloc(sizeof(char) * letters);
									t = read(d, f, letters);
										w = write(STDOUT_FILENO, f, t);

											free(f);
												close(d);
													return (w);
}

