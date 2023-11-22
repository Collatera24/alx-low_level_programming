#include "lists.h"

/**
 * create_new_node - creates new node
 *
 * @n: Data of node
 *
 * Return: Pointer to the node
 */

listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (NULL);

	return (new_node);
}

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 *
 * @head: First pointer of the list
 * @idx: index to the position of the new node is to be inserted
 * @n: The data of the new node
 *
 * Return: The address of the newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		*head = new_node;
	}
	for (k = 0; k < idx - 1 && temp != NULL && idx != 0; k++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new_node;
		new_node->next = temp_old;
	}
	return (new_node);
}
