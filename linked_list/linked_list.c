#include "linked_list.h"

/* Create a linked list by receiving an element and return the head */
Node_t *CreateList(Node_t **head, element_t e);

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

/* Delete a specific node in the linked list */
void ListDelete(Node_t **head, element_t e);

/* Delete the tail element of the linked list */
void Removetail(Node_t **head);

/* Reverse all the nodes the linked list */
void ReverseList(Node_t **head);

/* Sort the elements in the linked list */
void SortList(Node_t **head);

/* Return the linked list length */
unsigned int ListLength(Node_t **head);

/* Split the linked list by a specific node and return the second linked list head */
Node_t * SplitList(Node_t **head, element_t e);

/* Delete all the duplicate elements in the linked list */
void DeleteDup(Node_t **head);

/* Concatenate two linked list and make the first argument list as head */
void ConcatList(Node_t **head, Node_t **del_head);