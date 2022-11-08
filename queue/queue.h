#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int element_t;

typedef struct Node {
    element_t data;
    struct Node *next;
} Node_t;

typedef struct Queue {
    Node_t *head;
    Node_t *tail;
} Queue;

/* Initialize a queue */
void InitQueue(Queue **q);

/* Destroy the created queue */
void DestroyQueue(Queue **q);

/* Clear all the elements in the queue */
void ClearQueue(Queue **q);

/* If the queue is empty return true, else return false */
bool QueueIsEmpty(Queue **q);

/* Get the head element of the queue and copy to element e */
void GetHead(Queue **q, element_t *e);

/* Insert a new element e into the tail of the queue */
void EnQueue(Queue **q, element_t e);

/* Remove the first element of the queue and copy to element e */
void DeQueue(Queue **q, element_t *e);

/* Return the queue length */
unsigned int QueueLength(Queue **q);