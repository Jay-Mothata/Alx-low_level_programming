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

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_file(const char *filename, int flags, mode_t permissions);
void close_file(int file_descriptor, const char *filename);
void handle_error(int error_code, int file_descriptor, const char *filename);
int main(int argc, char *argv[]);
void display_elf_header(const char *filename);

#endif /* MAIN_H */
