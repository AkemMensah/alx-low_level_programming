#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: points to the first element in the list
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
