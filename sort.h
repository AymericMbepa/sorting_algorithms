#ifndef _SORT_H
#define _SORT_H


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t zise);
void insertion_sort_list(listint_t **list);
#endif
