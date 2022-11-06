#include "simple_stack.h"

int main(void)
{
    stack_t A;
    Initstack(&A);
    for (int i = 0; i < 15; i++)
        push(&A, i);
    
    printstack(&A);
    return 0;
}