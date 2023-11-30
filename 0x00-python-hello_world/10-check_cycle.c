#include "lists.h"

/**
 * check_cycle - Checks whether a singly linked list contains a cycle.
  * @list: Points to list head.
   * Return: 0 for no cycle, 1 if a cycle was found.
    */
    int check_cycle(listint_t *list)
    {
        listint_t *ptr1 = NULL;
        listint_t *ptr2 = NULL;

        if (list == NULL)
    return (0);
        ptr1 = list;
        ptr2 = list;

        while (ptr1 && ptr2 && ptr2->next)
        {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;

        if (ptr1 == ptr2)
    return (1);
            }
        return (0);
}
    
