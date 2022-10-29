#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *cap_string(char *);
char *rot13(char *);
void print_number(int n);
char *leet(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
