#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_bytes, written_bytes;
	int fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (written_bytes);
}
