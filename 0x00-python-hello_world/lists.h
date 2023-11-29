#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s -  Basic singly-linked list structure
 * @n: interger
 * @next: the point to the next node
 *
 * Description: singly-linked list node structure
 */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif /* LISTS_H */
