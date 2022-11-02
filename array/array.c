#include "array.h"

SqList *InitList() {
    SqList *newList = malloc(sizeof(SqList));
    newList->length = 0;
    return newList;
}

void DeleteList(SqList *L) {
    free(L);
}

bool ListEmpty(SqList *L);

void ClearList(SqList *L) {
    free(L);
    return;
}

void PrintList(SqList *L);

element_t GetElem(SqList *L, int i, element_t *e);

Status LocateElem(SqList *L, element_t e);

void ListInsert(SqList *L, int i, element_t e);

void ListDelete(SqList *L, int i, element_t *e);

int ListLength(SqList *L);