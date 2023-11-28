#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/types.h>

/* Function Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* cp.c Helper Functions */
int open_file(const char *filename, int flags, mode_t permissions);
void close_file(int file_descriptor, const char *filename);
void handle_error(int error_code, int file_descriptor, const char *filename);
int main(int argc, char *argv[]);

/* ELF_HEADER Helper Functions */
void display_elf_header(const char *filename);
void check_elf(unsigned char *e_iden;
void check_elf(unsigned char *e_ident);
void handle_class(unsigned char *e_ident);
void handle_data(unsigned char *e_ident);
void handle_version(unsigned char *e_ident);
void handle_osabi(unsigned char *e_ident);
void handle_abi(unsigned char *e_ident);
void handle_type(unsigned int e_type, unsigned char *e_ident);
void handle_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf_fd);
void print_usage(void);

#endif /* MAIN_H */
