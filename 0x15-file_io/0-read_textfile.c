#include "main.h"
/**
 * read_textfile - read a text file and print it to the posix standard
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual numer of letters it could read and print
 */
ssize_t read_textfile(cont char *filename, size_t letters)
{
	ssize_t file, fread fwrite;
	char *totalSize;

	totalSize = malloc(sizeof(char) * letters);
	if (totalSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == 1)
		return (0);
	fread = read(file, totalSize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, totalSize, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(totalSize);
	return (fwrite);
}
