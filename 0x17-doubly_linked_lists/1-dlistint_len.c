#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly LL
 * @h: head of doubly linked list (DLL)
 *
 * Return: num of nodes in DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
