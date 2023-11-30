#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>

/**
 * struct listint_s - Is a singly linked list.
 * @n: Is an integer obj.
 * @next: Points to next node.
 *
 * Description: This is a singly linked list node struct.
 * 
 */
typedef struct listint_s
{
  int n;
  struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>

/**
 * struct listint_s - Is a singly linked list.
 * @n: Is an integer obj.
 * @next: Points to next node.
 *
 * Description: This is a singly linked list node struct.
 * 
 */
typedef struct listint_s
{
  int n;
  struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>

/**
 * struct listint_s - Is a singly linked list.
 * @n: Is an integer obj.
 * @next: Points to next node.
 *
 * Description: This is a singly linked list node struct.
 * 
 */
typedef struct listint_s
{
  int n;
  struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
