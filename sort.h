#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction micros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - enumeration of boolean values.
 * @false: equals 0
 * @true: equals 1
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listing_s - doubly linked list node
 * @n: integer stored in the node.
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listing_s
{
	const int n;
	struct listing_s *prev;
	struct listing_s *next;
} listing_t;

/* printing helper function */
void print_array(const int *array, size_t size);
void print_list(const listing_t *list);

/* sorting algorths */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listing_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listing_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
