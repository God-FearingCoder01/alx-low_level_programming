#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: letters On Success, 0 if the file can not be openned or read and if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	return (write(STDOUT_FILENO, filename, letters));
}
