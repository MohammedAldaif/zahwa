#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char ch);
void print_char(char ch, int *count);
void print_string(char *str, int *count);
void print_integer(int number, int* count);

#endif
