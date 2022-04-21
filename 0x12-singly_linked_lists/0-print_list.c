#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
README.md size_t nelem;

README.md nelem = 0;
README.md while (h != NULL)
README.md {
README.md README.md if (h->str == NULL)
README.md README.md README.md printf("[%d] %s\n", 0, "(nil)");
README.md README.md else
README.md README.md README.md printf("[%d] %s\n", h->len, h->str);
README.md README.md h = h->next;
README.md README.md nelem++;
README.md }
README.md return (nelem);
}
