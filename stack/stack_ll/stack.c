#include "stack.h"

/* Initialize a stack */
void InitStack(stack *stk) {
    stk->top = NULL;
}

/* Clear all the elements in the stack */
void ClearStack(stack *stk) {
    if (!stk->top)
        return;
    
    Node_t *tmp = stk->top->next;
    while(tmp) {
        free(stk->top);
        stk->top = tmp;
        tmp = tmp->next;
    }
    free(stk->top);
    stk->top = NULL;
}

/* Push a specific element into the stack */
void PushStack(stack *stk, element_t e) {
    Node_t *pushed = malloc(sizeof(Node_t));
    pushed->data = e;
    pushed->next = stk->top;
    stk->top = pushed;
    return;
}

/* Pop the first element out and return the result */
Status PopStack(stack *stk, element_t *e) {
    if (!stk->top)
        return ERROR;
    
    Node_t *pop = stk->top;
    *e = pop->data;
    stk->top = pop->next;
    free(pop);
    return OK;
}

/* If the stack is empty return OK, else return ERROR */
bool StackIsEmpty(stack *stk) {
    if (stk->top)
        return ERROR;
    return OK;
}

/* Return number of elements in the stack */
unsigned int StackLength(stack *stk) {
    Node_t *tmp = stk->top;
    unsigned int length = 0;
    while (tmp) {
        length++;
        tmp = tmp->next;
    }
    return length;
}

/* Prints all the elements in the stack */
void PrintStack(stack *stk) {
    if (!stk->top) {
        printf("There aren't any elements in the stack.\n");
        return;
    }

    printf("(stack top)");
    Node_t *tmp = stk->top;
    while(tmp) {
        printf("%d  ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    return;
}