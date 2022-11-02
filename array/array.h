#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 20
#define OK      1
#define ERROR   -1

typedef int element_t;
typedef int Status;

typedef struct {
    element_t data[MAXSIZE];
    int length;
}SqList;

/* Initialize a list by allocating space and returning pointer to SqList */
SqList *InitList();

/* Clear all the elements inside the list */
void ClearList(SqList *L);

/* If list is empty return TRUE, else return FALSE */
bool ListEmpty(SqList *L);

/* Free the allocated List */
void DeleteList(SqList *L);

/* Print the entire list elements */
void PrintList(SqList *L);
element_t GetElem(SqList *L, int i, element_t *e);
Status LocateElem(SqList *L, element_t e);
void ListInsert(SqList *L, int i, element_t e);
void ListDelete(SqList *L, int i, element_t *e);
int ListLength(SqList *L);