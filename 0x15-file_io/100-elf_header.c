#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * err_mes - prints error messages
 * @mess: input
 *
 * Return: void
 */

void err_mes(const char *mess)
{
	fprintf(stderr, "%s\n", mess);
	exit(98);
}

/**
 * show_elf_header - helper function
 * @filename: input
 *
 * Return: void
 */

void show_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr elf_header;

	if (fd == -1)
	{
		err_mes("Failed to open the file");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		err_mes("Failed to read the ELF header");
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1]
			!= ELFMAG1 || elf_header.e_ident[EI_MAG2]
			!= ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		err_mes("Not a valid ELF file");
	}
	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", elf_header.e_entry);
	close(fd);
}

/**
 * main - entry point
 * @argc: input
 * @argv: input
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		err_mes("Usage: elf_header elf_filename");
	}
	show_elf_header(argv[1]);
	return (0);
}
