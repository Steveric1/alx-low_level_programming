#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/*Function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

/*Search Algorithm Helper*/
size_t min(size_t a, size_t b);

#endif /*SEARCH_ALGOS_H*/
