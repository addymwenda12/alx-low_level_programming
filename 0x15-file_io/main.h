#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>


int main(int argc, char **argv);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file(int fd);
void copy_file(int fd_from, int fd_to);
int open_file_for_writing(const char *filename);
int open_file_for_reading(const char *filename);
#endif
