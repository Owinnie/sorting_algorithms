#ifndef SORT_H
#define SORT_H
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * enum bool - Enumerate Boolean values.
 * @false: 0.
 * @true: 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);
void swap(listint_t **head, listint_t *node1, listint_t *node2);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
int partition(int *arr, int left, int right, size_t size);
void q_s_algo(int *arr, int left, int right, size_t size);

void shell_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);

void quick_sort_hoare(int *array, size_t size);
void hoare_sort(int *array, size_t size, int left, int right);
int hoare_partition(int *array, size_t size, int left, int right);

void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

#endif
