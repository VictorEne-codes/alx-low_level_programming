#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
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


#endif
