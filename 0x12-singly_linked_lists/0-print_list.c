#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_list - prints all the elements of a list
 *@h: pointer to the list
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *head, *newnode, *current;
	size_t count = 1;

	head = current = 0;	 
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		exit(1);
	}
	if (head == NULL)
	{
		head = newnode;
	}
	current = head;
	current->len = h->len;
	current->str = h->str;
	current->next = newnode;
	if (current->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n",current->len, current->str);
	}
	while (current->next != NULL)
	{
		current->str = h->str;
		current->len = h->len;
		current->next = h->next;
		current = current->next;
		if (current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		count++;
	}
	return (count);
}
