#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *str);
void display_usage(char *program_name);
int open_src_file(char *filename);
int open_dest_file(char *filename);
void copy_file_content(int fd_from, int fd_to);
void print_err(char *message, char *filename, int fd_from, int fd_to);

#endif
