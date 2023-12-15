#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where the value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev, i;

    if (list == NULL || size == 0)
        return (NULL);

    step = sqrt(size);
    prev = 0;

    while (list->index < size && list->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

        prev = list->index;
        for (i = 0; i < step && list->next != NULL; i++)
            list = list->next;

    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, list->index);

    list = list->next;
    while (prev <= list->index && list->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

        if (list->index < size - 1)
            list = list->next;
        else
            break;
    }

    if (list != NULL)
        printf("Found %d at index: %lu\n", value, list->index);
    else
        printf("Found %d at index: %p\n", value, (void *)list);

    return list;
}
