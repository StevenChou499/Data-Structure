#include "queue.h"

int main(void)
{
    Queue *A;
    printf("Initializing queue...\n");
    InitQueue(&A);
    PrintQueue(&A);
    printf("Enqueue 6\n");
    EnQueue(&A, (element_t) 6);
    PrintQueue(&A);
    printf("Enqueue 4\n");
    EnQueue(&A, (element_t) 4);
    PrintQueue(&A);
    printf("Enqueue 1\n");
    EnQueue(&A, (element_t) 1);
    PrintQueue(&A);
    printf("Getting the head value...\n");
    element_t e;
    GetHead(&A, &e);
    printf("The head value is %d\n", e);
    printf("The queue length is %u\n", QueueLength(&A));
    PrintQueue(&A);
    printf("Dequeue...");
    DeQueue(&A, &e);
    printf("The dequeued value is %d\n", e);
    PrintQueue(&A);
    printf("Dequeue...");
    DeQueue(&A, &e);
    printf("The dequeued value is %d\n", e);
    PrintQueue(&A);
    printf("Destroying queue...\n");
    DestroyQueue(&A);

    return 0;
}