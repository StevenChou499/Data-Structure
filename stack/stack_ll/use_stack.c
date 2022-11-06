#include "stack.h"

int main(void)
{
    stack A;
    printf("Initializing stack...\n");
    InitStack(&A);
    PrintStack(&A);

    printf("Pushing 1 to 10 inside the stack...\n");
    for (int i = 1; i <= 10; i++)
        PushStack(&A, (element_t) i);
    PrintStack(&A);

    if (StackIsEmpty(&A))
        printf("The stack is now empty.\n");
    
    printf("The stack lenght is now %u\n", StackLength(&A));

    element_t recv;

    printf("Poping out a element...\n");
    PopStack(&A, &recv);
    PrintStack(&A);
    printf("The element is %d\n", recv);

    printf("Clearing the stack...\n");
    ClearStack(&A);
    PrintStack(&A);

    if (StackIsEmpty(&A))
        printf("The stack is now empty.\n");

    return 0;
}