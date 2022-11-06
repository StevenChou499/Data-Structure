#include "simple_stack.h"

/* Initialize a stack */
void Initstack(stack_t *stk) {
    if (!stk)
        return;
    
    stk->top = -1;
    return;
}

/* Push a specifc element into the stack and return OK, if failed return ERROR */
STATUS push(stack_t *stk, element_t e) {
    if (stk->top + 1 == STACKSIZE)
        return ERROR;
    
    stk->array[++stk->top] = e;
    return OK;
}

/* Pop the top stack element to e and return OK, if the stack is empty return ERROR */
STATUS pop(stack_t *stk, element_t *e) {
    if (stk->top == -1)
        return ERROR;
    
    *e = stk->array[stk->top--];
    return OK;
}

/* Return the number of elements inside the stack */
int length(stack_t *stk) {
    return stk->top + 1;
}

/* Return whether the stack is now full */
bool stackfull(stack_t *stk) {
    if (stk->top + 1 == STACKSIZE)
        return true;
    return false;
}

/* Print all the stack elements */
void printstack(stack_t *stk) {
    if (stk->top == -1)
        fprintf(stderr, "There aren't any elements at all.\n");
    else {
        printf("(stack bottom)");
        for (int i = 0; i <= stk->top; i++)
            printf("%d  ", stk->array[i]);
        printf("\n");
    }
    
    return;
}