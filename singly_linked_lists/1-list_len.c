#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list
 * @str: string to be added
 * @len: length of the string
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len = 0;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);

}
