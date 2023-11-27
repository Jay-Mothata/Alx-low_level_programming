#include "main.h"

/**
 * open_file - Opens a file with specified flags and permissions.
 * @filename: The name of the file.
 * @flags: The flags to use when opening the file.
 * @permissions: The permissions to set if the file is created.
 *
 * Return: The file descriptor on success,
 *	or exits with an error code on failure.
 */

int open_file(const char *filename, int flags, mode_t permissions)
{
	int file_descriptor = open(filename, flags, permissions);

	if (file_descriptor == -1)
	{
		handle_error(98, file_descriptor, filename);
	}
	return (file_descriptor);
}

/**
 * close_file - Closes a file descriptor.
 * @file_descriptor: The file descriptor to close.
 * @filename: The name of the file associated with the file descriptor.
 *
 * Return: Exits with an error code on failure.
 */

void close_file(int file_descriptor, const char *filename)
{
	if (close(file_descriptor) == -1)
	{
		handle_error(100, file_descriptor, filename);
	}
}

/**
 * handle_error - Handles errors by printing an error message and exiting.
 * @error_code: The error code to determine the type of error.
 * @file_descriptor: The file descriptor associated with the error.
 * @filename: The name of the file associated with the error.
 *
 * Return: Exits with the specified error code.
 */

void handle_error(int error_code, int file_descriptor, const char *filename)
{
	dprintf(2, "Error: ");
	if (error_code == 98)
	{
		dprintf(2, "Can't read from file %s\n", filename);
	}
	else if (error_code == 99)
	{
		dprintf(2, "Can't write to %s\n", filename);
	}
	else if (error_code == 100)
	{
		dprintf(2, "Can't close fd %d\n", file_descriptor);
	}
	exit(error_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: Exits with the corresponding exit code on failure.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, read_result, write_result;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open_file(argv[1], O_RDONLY, 0);
	file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);

	while ((read_result = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		write_result = write(file_to, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			handle_error(99, file_to, argv[2]);
		}
	}

	if (read_result == -1)
	{
		handle_error(98, file_from, argv[1]);
	}

	close_file(file_from, argv[1]);
	close_file(file_to, argv[2]);

	return (0);
}
