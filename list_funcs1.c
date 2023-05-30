#include "monty.h"

/**
 * dlistint_len - returns the number of doubly linked list nodes
 * @h: a reference to the list
 *
 * Return: the number of nodes.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

/**
 * add_dnodeint - inserts a new node at the start of
 * a doubly linked list.
 * @head: a list with a double pointer
 * @n: the data to be inserted into the new node
 *
 * Return: the new element's address, or NULL if it failed.
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}

/**
 * print_dlistint - returns a doubly linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes in the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}

/**
 * delete_dnodeint_at_index - deletes a node at a given
 * index in a doubly linked list.
 * @head: a list with a double pointer
 * @index: the node to be deleted's index
 *
 * Return: 1 if successful, -1 if unsuccessful.
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
		if (!temp)
			return (0);
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}

/**
 * get_dnodeint_at_index - returns the nth doubly linked list node.
 * @head: a list pointer
 * @index: the node index to return
 *
 * Return the node's address, or NULL if it does not exist.
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}
