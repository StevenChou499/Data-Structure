#include <stdio.h>
#include <stdbool.h>

#define STACKSIZE    20
#define OK            1
#define ERROR        -1

typedef int STATUS;
typedef int element_t;

typedef struct stack {
    element_t array[STACKSIZE];
    int top;
} stack_t;

/* Initialize a stack */
void Initstack(stack_t *stk);

/* Push a specifc element into the stack and return OK, if failed return ERROR */
STATUS push(stack_t *stk, element_t e);

/* Pop the top stack element to e and return OK, if the stack is empty return ERROR */
STATUS pop(stack_t *stk, element_t *e);

/* Clear all the stack */
void clearstack(stack_t *stk);

/* Return the number of elements inside the stack */
int stacklength(stack_t *stk);

/* Return whether the stack is now full */
bool stackfull(stack_t *stk);

/* Print all the stack elements */
void printstack(stack_t *stk);