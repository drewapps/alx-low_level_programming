#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
README.md size_t nodes = 0;

README.md while (h)
README.md {
README.md README.md nodes++;
README.md README.md printf("%d\n", h->n);
README.md README.md h = h->next;
README.md }

README.md return (nodes);
}
