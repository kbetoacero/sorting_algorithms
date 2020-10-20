#include "sort.h"
/**
 * insertion_sort_list - sorts a double linked list
 * of integers in ascending order
 * @list: list listint_t
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *l_list = NULL;
	listint_t *a = NULL;
	listint_t *b = NULL;
	listint_t *tmp = NULL;
	listint_t *tmp_1 = NULL;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}
	l_list = (*list)->next;
	while (l_list)
	{
		b = l_list;
		a = b->prev;
		while (a && a->n > b->n)
		{
			tmp = b->next;
			tmp_1 = a->prev;
			a->next = b->next;
			b->prev = a->prev;
			a->prev = b;
			b->next = a;
			if (tmp_1)
				tmp_1->next = b;
			if (tmp)
				tmp->prev = a;
			if (!b->prev)
				*list = b;
			print_list(*list);
			a = b->prev;
		}
		l_list = l_list->next;
	}
}
