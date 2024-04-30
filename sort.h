#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly Linked List Node
 *
 * @nd: integer stored in the node
 * @prev: pointer to the previous element in the list
 * @next: pointer to the next element in the list
 */

typedef struct listint_s
{
	const int n;
	struct listint *prev;
	struct listint *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);

void fn_swap(int *var1, int *var2);

#endif /* SORT_H */

