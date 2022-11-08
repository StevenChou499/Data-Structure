#include "queue.h"

/* Initialize a queue */
void InitQueue(Queue **q) {
    *q = malloc(sizeof(Queue));
    (*q)->head = NULL;
    (*q)->tail = NULL;
    return;
}

/* Destroy the created queue */
void DestroyQueue(Queue **q) {
    Node_t *tmp = (*q)->head;
    if (tmp) {
        tmp = (*q)->head->next;
        free((*q)->head);
        (*q)->head = tmp;
    }
    free(*q);
    return;
}

/* Clear all the elements in the queue */
void ClearQueue(Queue **q) {
    Node_t *tmp = (*q)->head;
    if (tmp) {
        tmp = (*q)->head->next;
        free((*q)->head);
        (*q)->head = tmp;
    }
    (*q)->head = NULL;
    (*q)->tail = NULL;
    return;
}

/* If the queue is empty return true, else return false */
bool QueueIsEmpty(Queue **q) {
    if ((*q)->tail)
        return true;
    return false;
}

/* Get the head element of the queue and copy to element e */
void GetHead(Queue **q, element_t *e) {
    if ((*q)->head)
        *e = (*q)->head->data;
    return;
}

/* Insert a new element e into the tail of the queue */
void EnQueue(Queue **q, element_t e) {
    Node_t *new_node = malloc(sizeof(Node_t));
    new_node->data = e;
    new_node->next = NULL;
    if ((*q)->tail) {
        (*q)->head = new_node;
        (*q)->tail = new_node;
        return;
    }
    (*q)->tail->next = new_node;
    return;
}

/* Remove the first element of the queue and copy to element e */
void DeQueue(Queue **q, element_t *e) {
    if (!(*q)->head)
        return;
    *e = (*q)->head->data;
    Node_t *tmp = (*q)->head;
    (*q)->head = (*q)->head->next;
    free(tmp);
    return;
}

/* Return the queue length */
unsigned int QueueLength(Queue **q) {
    if (!(*q)->head)
        return 0;
    unsigned int len = 0;
    Node_t *tmp = (*q)->head;
    while (tmp != (*q)->tail) {
        len++;
        tmp = tmp->next;
    }
    return len;
}