#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int _strcmp(char *s1, char *s2);

char *_strncpy(char *dest, char *src, int n);

char *_strncat(char *dest, char *src, int n);

char *_strcat(char *dest, char *src);

void _puts(char *a);

int _strlen(char *s);

int _isupper(int c);

void _putchar (int arg);

void print_alphabet(void);

void print_alphabet_x10(void);

#endif /* _MAIN_H_ */
