#include "array.h"

/* Initialize a list by allocating space and returning pointer to SqList */
SqList *InitList() {
    SqList *newList = malloc(sizeof(SqList));
    newList->length = 0;
    return newList;
}

/* Clear all the elements inside the list */
void ClearList(SqList *L) {
    L->length = 0;
    return;
}

/* If list is empty return TRUE, else return FALSE */
bool ListEmpty(SqList *L) {
    if (L->length == 0)
        return true;
    return false;
}

/* Free the allocated List */
void DeleteList(SqList *L) {
    free(L);
    return;
}

/* Print the entire list elements */
void PrintList(SqList *L) {
    if (L->length == 0)
        fprintf(stderr, "No elements found.\n");
    for (int index = 0; index < L->length; index++) {
        fprintf(stdout, "Element %2d: %2d\n", index + 1, L->data[index]);
    }
    return;
}

/* Get the element from ith place of the list */
void GetElem(SqList *L, int i, element_t *e) {
    *e = L->data[i - 1];
    return;
}

/* Find the element e inside the list, return TRUE when found, else return FALSE */
Status LocateElem(SqList *L, element_t e) {
    for (int index = 0; index < L->length; index++) {
        if (L->data[index] == e)
            return OK;
    }
    return ERROR;
}

/* Insert the element e in the ith place of list */
void ListInsert(SqList *L, int i, element_t e) {
    if (i < 1 || i > MAXSIZE) {
        fprintf(stderr, "Invalid array access, please enter the correct index.\n");
        return;
    }
        
    if (L->length == MAXSIZE) {
        fprintf(stderr, "The array is now full, can't insert any elements.\n");
        return;
    }

    if (L->length + 1 < i) {
        fprintf(stderr, "The length of array is now %d, but the insert position is %d, can't insert any unoccupied slots.\n", L->length, i);
        return;
    }

    int index = L->length;
    for (; index > i; index--) {
        L->data[index - 1] == L->data[index];
    }
    L->data[index] = e;

    if (i > L->length)
        L->length++;
    
    return;
}

/* delete the ith place of the list and return the element */
void ListDelete(SqList *L, int i, element_t *e) {
    if (i < 1 || i > MAXSIZE) {
        fprintf(stderr, "Invalid array access, please enter the correct index.\n");
        return;
    }

    if (L->length == 0) {
        fprintf(stderr, "The array is now empty, can't delete any elements.\n");
        return;
    }

    if (L->length < i) {
        fprintf(stderr, "Can't delete any uninserted slots.\n");
        return;
    }

    *e = L->data[i - 1];
    for (int index = i; index < L->length; index++) {
        L->data[index - 1] = L->data[index];
    }
    L->length--;

    
    return;
}

/* return the length of the list */
int ListLength(SqList *L) {
    return L->length;
}