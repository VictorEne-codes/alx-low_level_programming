#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *ei);
void print_magic(unsigned char *ei);
void print_class(unsigned char *ei);
void print_data(unsigned char *ei);
void print_version(unsigned char *ei);
void print_abi(unsigned char *ei);
void print_osabi(unsigned char *ei);
void print_type(unsigned int et, unsigned char *ei);
void print_entry(unsigned long int ee, unsigned char *ei);
void close_elf(int elf);

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

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @ei: input
 *
 * Return: void
 */

void print_osabi(unsigned char *ei)
{
	printf("  OS/ABI:                            ");

	switch (ei[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ei[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @ei: input
 *
 * Return: void
 */

void print_abi(unsigned char *ei)
{
	printf("  ABI Version:                       %d\n",
	       ei[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @et: input
 * @ei: input
 *
 * Return: void
 */

void print_type(unsigned int et, unsigned char *ei)
{
	if (ei[EI_DATA] == ELFDATA2MSB)
		et >>= 8;

	printf("  Type:                              ");

	switch (et)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", et);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @ee: input
 * @ei: input
 *
 * Return: void
 */
void print_entry(unsigned long int ee, unsigned char *ei)
{
	printf("  Entry point address:               ");

	if (ei[EI_DATA] == ELFDATA2MSB)
	{
		ee = ((ee << 8) & 0xFF00FF00) |
			  ((ee >> 8) & 0xFF00FF);
		ee = (ee << 16) | (ee >> 16);
	}

	if (ei[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)ee);

	else
		printf("%#lx\n", ee);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: input
 * 
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - shows ELF header at the start of an ELF file
 * @argc: inpt
 * @argv: input
 *
 * Return: int
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int i, j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	j = read(i, h, sizeof(Elf64_Ehdr));
	if (j == -1)
	{
		free(h);
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(h->e_ident);
	printf("ELF Header:\n");
	print_magic(h->e_ident);
	print_class(h->e_ident);
	print_data(h->e_ident);
	print_version(h->e_ident);
	print_osabi(h->e_ident);
	print_abi(h->e_ident);
	print_type(h->e_type, h->e_ident);
	print_entry(h->e_entry, h->e_ident);

	free(h);
	close_elf(i);
	return (0);
}
