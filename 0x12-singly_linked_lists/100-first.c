#include <stdio.h>

/**
 * pre_main_message - Prints a message before the main function is executed.
 */

void __attribute__((constructor)) pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * add_node - Adds new node
 * @head: Ptr to the head of linked list
 * @str: String to be duplicated and stored in new node
 *
 * Return: Add of new element, or NULL or failure
 */

#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Ptr to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Ptr to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 * Return: The address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}

/**
 * free_list - Frees a list_t list.
 * @head: Ptr to the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
