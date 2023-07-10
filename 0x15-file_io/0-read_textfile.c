#include <main.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int o, r, w;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char * letters));
	if (buffer == NULL)
		return (0);

	o = fopen(filename, "r+");
	r = read(o, buffer, letter);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);

}
