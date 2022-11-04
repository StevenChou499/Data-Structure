#include "linked_list.h"

int main(void)
{
    element_t e = 1;
    Node_t *head = CreateList();
    PrintList(&head);

    // Inserthead(&head, (element_t) 5);
    // PrintList(&head);

    // Inserttail(&head, (element_t) 87);
    // PrintList(&head);

    // Removehead(&head);
    // PrintList(&head);

    // Removetail(&head);
    // PrintList(&head);

    // DeletePos(&head, 1);
    // PrintList(&head);

    InsertPos(&head, (element_t) 4, 0);
    PrintList(&head);

    InsertPos(&head, (element_t) 54, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 32, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 2, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 3, 4);
    PrintList(&head);

    printf("The length of the list is %u.\n", ListLength(&head));

    FreeList(&head);
    return 0;
}