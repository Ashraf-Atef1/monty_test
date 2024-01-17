#include "monty.h"

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * This function adds a new node with the given integer value at the beginning
 * of a doubly linked list. If memory allocation fails, it returns NULL.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
        stack_t *new_node;

        new_node = malloc(sizeof(stack_t));
                if (!new_node)
                        return (NULL);
        new_node->n = n;
        new_node->prev = NULL;
        new_node->next = *head;
        if (*head)
                (*head)->prev = new_node;
        *head = new_node;
        return (new_node);
}

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
        stack_t *new_last_node, *tmp;

        new_last_node = malloc(sizeof(stack_t));
        if (!new_last_node)
                return (NULL);
        new_last_node->next = NULL;
        new_last_node->n = n;
        tmp = *head;
        if (!tmp)
        {
                *head = new_last_node;
                new_last_node->prev = NULL;
        }
        else
        {
                while (tmp->next)
                {
                        tmp = tmp->next;
                }
                tmp->next = new_last_node;
                new_last_node->prev = tmp;
        }
        return (new_last_node);
}
