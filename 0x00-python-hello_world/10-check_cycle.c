#include "lists.h"
#include <stdlib.h>
/**
 * check_cycle - a function in C that checks if a singly linked
 * list has a cycle in it.
 * @list: A singly-linked list
 *
 * Return: 0 if there is no cycle and 1 if otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (1);
}
