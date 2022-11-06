#include "queue.h"

/* Initialize a queue */
void InitQueue(Queue *q) {
    q->headNode.data = 0;
    q->headNode.next = NULL;
    q->head = &q->headNode;
    q->tail = &q->headNode;
}

/* Destroy the created queue */
void DestroyQueue(Queue *q);

/* Clear all the elements in the queue */
void ClearQueue(Queue *q);

/* If the queue is empty return true, else return false */
bool QueueIsEmpty(Queue *q) {
    if (!q->headNode.next)
        return true;
    return false;
}

/* Get the head element of the queue and copy to element e */
void GetHead(Queue *q, element_t *e) {
    if (!q->head->next)
        return;
    *e = q->head->next->data;
    return;
}

/* Insert a new element e into the tail of the queue */
void EnQueue(Queue *q, element_t e);

/* Remove the first element of the queue and copy to element e */
void DeQueue(Queue *q, element_t *e);

/* Return the queue length */
unsigned int QueueLength(Queue *q);