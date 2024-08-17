#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_elf - Checks if a file is an ELF file.
 * @ei: input
 *
 * Return: void
 */

void check_elf(unsigned char *ei)
{
	int i;

		for (i = 0; i < 4; i++)
	{
		if (ei[i] != 127 &&
		    ei[i] != 'E' &&
		    ei[i] != 'L' &&
		    ei[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @ei: input
 *
 * Return: void
 */

void print_magic(unsigned char *ei)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ei[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @ei: input
 *
 * Return: void
 */

void print_class(unsigned char *ei)
{
	printf("  Class:                             ");

	switch (ei[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ei[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @ei: input
 *
 * Return: void
 */

void print_data(unsigned char *ei)
{
	printf("  Data:                              ");

	switch (ei[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ei[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @ei: input
 *
 * Return: void
 */

void print_version(unsigned char *ei)
{
	printf("  Version:                           %d",
	       ei[EI_VERSION]);

	switch (ei[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
