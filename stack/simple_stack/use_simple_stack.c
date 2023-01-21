#include "simple_stack.h"

int main(void)
{
    stack_t A;
    Initstack(&A);
    for (int i = 0; i < 15; i++)
        push(&A, i);

    push(&A, 87);
    push(&A, 20);
    push(&A, 21);
    push(&A, 22);
    push(&A, 23);
    push(&A, 24);

    printstack(&A);

    element_t e;

    pop(&A, &e);
    printf("Popping a element, the popped element is %d\n", e);
    printstack(&A);

    pop(&A, &e);
    printf("Popping a element, the popped element is %d\n", e);
    printstack(&A);

    if (stackfull(&A))
        printf("The stack is now full\n");

    printf("Getting stack length...\n");
    printf("The stack length is %d\n", stacklength(&A));

    printf("Clearing all the stack elements\n");

    clearstack(&A);

    printstack(&A);
    
    return 0;
}