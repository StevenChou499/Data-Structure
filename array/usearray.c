#include "array.h"

int main(void)
{
    SqList *List = InitList();
    for (int i = 0; i < 10; i++) {
        ListInsert(List, (i + 1), (element_t) i);
    }
    PrintList(List);

    DeleteList(List);
    
    return 0;
}