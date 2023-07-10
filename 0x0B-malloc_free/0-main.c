#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - always return success
 *
 * Return: 0 on success
 */

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
