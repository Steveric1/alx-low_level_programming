#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char my_memset(void *ptr, int value, size_t num);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
