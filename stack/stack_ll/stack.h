#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define OK        1
#define ERROR     0

typedef int element_t;
typedef int Status;
typedef struct Node {
    element_t data;
    struct Node *next;
} Node_t;

typedef struct {
    Node_t *top;
} stack;

/* Initialize a stack */
void InitStack(stack *stk);

/* Clear all the elements in the stack */
void ClearStack(stack *stk);

/* Push a specific element into the stack */
void PushStack(stack *stk, element_t e);

/* Pop the first element out and return the result */
Status PopStack(stack *stk, element_t *e);

/* Return whether the stack is empty or not */
bool StackIsEmpty(stack *stk);

/* Return number of elements in the stack */
unsigned int StackLength(stack *stk);

/* Prints all the elements in the stack */
void PrintStack(stack *stk);