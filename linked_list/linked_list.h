#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int element_t;

typedef struct Node {
    element_t data;
    struct Node *next;
} Node_t;

/* Create a linked list by receiving an element and return the head */
Node_t *CreateList();

/* Delete all the nodes in the linked list and turn head to NULL */
void FreeList(Node_t **head);

/* Return whether the linked list is empty */
bool ListEmpty(Node_t **head);

/* Printing the whole linked list */
void PrintList(Node_t **head);

/* Inserting a element in the head */
void Inserthead(Node_t **head, element_t e);

/* Insert a element at a specific position */
void InsertPos(Node_t **head, element_t e, unsigned int position);

/* Inserting a element in the tail */
void Inserttail(Node_t **head, element_t e);

/* Delete the head element of the linked list */
void Removehead(Node_t **head);

/* Delete a specific position of node in the linked list, the position started with 0 */
void DeletePos(Node_t **head, unsigned int position);

/* Delete the tail element of the linked list */
void Removetail(Node_t **head);

/* Reverse all the nodes the linked list */
void ReverseList(Node_t **head);

/* Sort the elements in the linked list */
void SortList(Node_t **head);

/* Return the linked list length */
unsigned int ListLength(Node_t **head);

/* Delete all the duplicate elements in the linked list (the list is sorted) */
void DeleteDup(Node_t **head);