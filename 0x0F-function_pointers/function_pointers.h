#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



void array_iterator(int *array, size_t size, void (*action)(int));

void print_name(char *name, void (*f)(char *));

void print_diagsums(int *a, int size);

void print_chessboard(char (*a)[8]);

char *_strstr(char *haystack, char *needle);

char *_strpbrk(char *s, char *accept);

unsigned int _strspn(char *s, char *accept);

char *_strchr(char *s, char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memset(char *s, char b, unsigned int n);

void _puts(char *a);

int _strlen(char *s);

int _isupper(int c);

void _putchar (int arg);

void print_alphabet(void);

void print_alphabet_x10(void);

#endif /* _MAIN_H_ */
