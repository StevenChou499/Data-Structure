#include "array.h"

int main(void)
{
    SqList *List = InitList();
    for (int i = 1; i <= 10; i++) {
        ListInsert(List, i, (element_t) i);
    }
    PrintList(List);

    ListInsert(List, 12, (element_t) 12);

    PrintList(List);

    ListInsert(List, 5, (element_t) 87);

    PrintList(List);

    printf("The list length is now %d.\n", ListLength(List));

    ListInsert(List, 11, (element_t) 'a');

    PrintList(List);

    printf("The list length is now %d.\n", ListLength(List));

    element_t tmp = 4;

    if (LocateElem(List, tmp))
        printf("There are element %d in the list.\n", tmp);
    else
        printf("There aren't element %d in the list.\n", tmp);

    ListDelete(List, 3, &tmp);

    printf("The deleted element is %d.\n", tmp);

    PrintList(List);

    printf("Clearing list...\n");

    ClearList(List);

    if (ListEmpty(List))
        printf("The list is now empty.\n");
    else
        printf("The list is not empty.\n");

    PrintList(List);

    DeleteList(List);
    
    return 0;
}