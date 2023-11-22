#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 * Return: Address of node where loop starts, NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw, *fst;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slw = head->next;
	fst = head->next->next;

	while (fst && fst->next)
	{
		if (slw == fst)
		{
			slw = head;

			while (slw != fst)
			{
				slw = slw->next;
				fst = fst->next;
			}
			return (slw);
		}
		slw = slw->next;
		fst = fst->next->next;
	}

	return (NULL);
}
