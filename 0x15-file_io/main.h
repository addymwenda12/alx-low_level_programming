#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *message);
void exit_with_error(int code, const char *message);
int main(int argc, char *argv[]);

#endif
