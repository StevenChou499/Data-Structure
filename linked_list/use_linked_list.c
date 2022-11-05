#include "linked_list.h"

int main(void)
{
    element_t e = 1;
    Node_t *head = CreateList();
    PrintList(&head);

    for (int i = 5; i >=0; i--)
        Inserttail(&head, (element_t) 5);
    
    PrintList(&head);

    SortList(&head);

    printf("Sorting...\n");

    PrintList(&head);

    Inserthead(&head, (element_t) 5);
    PrintList(&head);

    Inserttail(&head, (element_t) 87);
    PrintList(&head);

    Removehead(&head);
    PrintList(&head);

    Removetail(&head);
    PrintList(&head);

    DeletePos(&head, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 4, 0);
    PrintList(&head);

    InsertPos(&head, (element_t) 32, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 32, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 2, 1);
    PrintList(&head);

    InsertPos(&head, (element_t) 3, 4);
    PrintList(&head);

    Inserttail(&head, (element_t) 54);
    PrintList(&head);

    Inserthead(&head, (element_t) 2);
    PrintList(&head);

    Inserttail(&head, (element_t) 54);
    PrintList(&head);

    Inserttail(&head, (element_t) 3);
    PrintList(&head);

    Inserttail(&head, (element_t) 4);
    PrintList(&head);

    printf("The length of the list is %u.\n", ListLength(&head));

    ReverseList(&head);

    PrintList(&head);

    printf("Sorting...\n");

    SortList(&head);

    PrintList(&head);

    DeleteDup(&head);
    
    PrintList(&head);

    FreeList(&head);
    return 0;
}