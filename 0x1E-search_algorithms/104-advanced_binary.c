#include "search_algos.h"

/**
 * _binary_search_recur - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: the index where value is located
 */
int _binary_search_recur(int *array, size_t left, size_t right, int value)
{
    size_t i, mid;

   if (array == NULL)
       return (-1);
    
    if (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[right]);

        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return (mid);
        if (array[mid] < value)
            return (_binary_search_recur(array, mid + 1, right, value));
        else
            return (_binary_search_recur(array, left, mid - 1, value));
    }
    return (-1);
}


/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);
    return (_binary_search_recur(array, 0, size - 1, value));
}