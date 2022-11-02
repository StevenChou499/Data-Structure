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

/* Get the element from ith place of the list */
void GetElem(SqList *L, int i, element_t *e);

/* Find the element e inside the list, return TRUE when found, else return FALSE */
Status LocateElem(SqList *L, element_t e);

/* Insert the element e in the ith place of list */
void ListInsert(SqList *L, int i, element_t e);

/* delete the ith place of the list and return the element */
void ListDelete(SqList *L, int i, element_t *e);

/* return the length of the list */
int ListLength(SqList *L);