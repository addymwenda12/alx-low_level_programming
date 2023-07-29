#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define ERROR_EXIT_CODE 98

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void verify(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void class(unsigned char *e_ident);
void data(unsigned char *e_ident);
void version(unsigned char *e_ident);
void osabi(unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void entry(unsigned int e_entry, unsigned char *e_ident);
int main(int argc, char *argv[]);

#endif
