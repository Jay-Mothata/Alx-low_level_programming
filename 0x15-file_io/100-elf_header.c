#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_elf_header - Displays info in the ELF header of a file.
 * @filename: The name of the ELF file.
 */

void display_elf_header(const char *filename);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	display_elf_header(argv[1]);

	return (0);
}

/**
 * display_elf_header - Displays info in the ELF header of a file.
 * @filename: The name of the ELF file.
 */

void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}

	Elf64_Ehdr elf_header;

	ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Unable to read ELF header\n");
		close(fd);
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("    Magic:    ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");

	printf("	Class:			      %s\n",
	       elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("	Data:			       %s\n",
	       elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("	Version:		      %d (current)\n",
	       elf_header.e_ident[EI_VERSION]);
	printf("	OS/ABI:		       %s\n",
	       elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("	ABI Version:	      %d\n",
	       elf_header.e_ident[EI_ABIVERSION]);
	printf("	Type:			      %s\n",
	       elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("	Entry point address: %lx\n",
	       (unsigned long)elf_header.e_entry);
	printf("\n");

	close(fd);
}
