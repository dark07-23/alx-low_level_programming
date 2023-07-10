#include "main.h"


int append_text_to_file(const char *filename, char *text_content)
{
		int b, m, n = 0;

			if (filename == NULL)
						return (-1);

				if (text_content != NULL)
						{
									for (n = 0; text_content[n];)
													n++;
										}

					b = open(filename, O_WRONLY | O_APPEND);
						m = write(o, text_content, len);

							if (b == -1 || m == -1)
										return (-1);

								close(b);

									return (1);
}


