#include "linked_list.h"

/* Create a linked list by receiving an element and return the head */
Node_t *CreateList() {
    return NULL;
}

/* Delete all the nodes in the linked list and turn head to NULL */
void FreeList(Node_t **head) {
    if (!*head)
        return;
    Node_t *current = (*head)->next;
    while (current != NULL) {
        free(*head);
        *head = current;
        current = current->next;
    }
    free(*head);
    *head = NULL;
    return;
}

/* Return whether the linked list is empty, if the list is empty, return true, else return false */
bool ListEmpty(Node_t **head) {
    if (!*head)
        return true;
    return false;
}

/* Printing the whole linked list */
void PrintList(Node_t **head) {
    Node_t *tmp = *head;
    printf("(head)");
    while (tmp != NULL) {
        printf("%2d---> ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

/* Inserting a element in the head */
void Inserthead(Node_t **head, element_t e) {
    Node_t *new_head = malloc(sizeof(Node_t));
    new_head->data = e;
    new_head->next = *head;
    *head = new_head;
    return;
}

/* Insert a element at a specific position, position is 0 index */
void InsertPos(Node_t **head, element_t e, unsigned int position) {
    Node_t *new_node = malloc(sizeof(Node_t));
    new_node->data = e;
    /* If position is 0, same as inserthead */
    if (!position) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node_t *tmp = *head;
    for (unsigned int index = 1; index < position && tmp; index++) {
        tmp = tmp->next;
    }

    if (!tmp)
        return;
    
    new_node->next = tmp->next;
    tmp->next = new_node;
    return;
}

/* Inserting a element in the tail */
void Inserttail(Node_t **head, element_t e) {
    Node_t *tmp = *head;

    /* There aren't any elements at all */
    if (!tmp) {
        tmp = malloc(sizeof(Node_t));
        tmp->data = e;
        tmp->next = *head;
        *head = tmp;
        return;
    }

    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = malloc(sizeof(Node_t));
    tmp->next->data = e;
    tmp->next->next = NULL;
    return;
}

/* Delete the head element of the linked list */
void Removehead(Node_t **head) {
    if (!*head)
        return;

    Node_t *tmp = (*head)->next;
    free(*head);
    *head = tmp;
    return;
}

/* Delete a specific position of node in the linked list, the position started with 0 */
void DeletePos(Node_t **head, unsigned int position) {
    if (!*head)
        return;
    
    Node_t *tmp = *head;
    if (!position) {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
        return;
    }
    
    for (unsigned int index = 1; index < position && tmp; index++)
        tmp = tmp->next;
    
    /* Invalid position */
    if (!tmp || !tmp->next)
        return;
    
    Node_t *del = tmp->next;
    tmp->next = del->next;
    free(del);
    return;
}

/* Delete the tail element of the linked list */
void Removetail(Node_t **head) {
    if (!*head)
        return;
    
    Node_t *tmp = *head;
    while (tmp->next != NULL)
        tmp = tmp->next;

    if (tmp == *head)
        *head = NULL;
    
    free(tmp);
    return;
}

/* Reverse all the nodes the linked list */
void ReverseList(Node_t **head);

/* Sort the elements in the linked list */
void SortList(Node_t **head);

/* Return the linked list length */
unsigned int ListLength(Node_t **head) {
    Node_t *tmp = *head;
    unsigned int len = 0;
    while (tmp) {
        tmp = tmp->next;
        len++;
    }
    
    return len;
}

/* Split the linked list by a specific node and return the second linked list head */
Node_t * SplitList(Node_t **head, element_t e);

/* Delete all the duplicate elements in the linked list */
void DeleteDup(Node_t **head);

/* Concatenate two linked list and make the first argument list as head */
void ConcatList(Node_t **head, Node_t **del_head);