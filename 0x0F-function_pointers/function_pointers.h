#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

char _putchar(char *s);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
