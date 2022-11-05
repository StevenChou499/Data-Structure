#include "linked_list.h"

/* Create a linked list by receiving an element and return the head */
Node_t *CreateList() {
    return NULL;
}

/* Delete all the nodes in the linked list and turn head to NULL */
void FreeList(Node_t **head) {
    if (!*head)
        return;
    Node_t *current = (*head)->next;
    while (current != NULL) {
        free(*head);
        *head = current;
        current = current->next;
    }
    free(*head);
    *head = NULL;
    return;
}

/* Return whether the linked list is empty, if the list is empty, return true, else return false */
bool ListEmpty(Node_t **head) {
    if (!*head)
        return true;
    return false;
}

/* Printing the whole linked list */
void PrintList(Node_t **head) {
    Node_t *tmp = *head;
    printf("(head)");
    while (tmp != NULL) {
        printf("%2d---> ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

/* Inserting a element in the head */
void Inserthead(Node_t **head, element_t e) {
    Node_t *new_head = malloc(sizeof(Node_t));
    new_head->data = e;
    new_head->next = *head;
    *head = new_head;
    return;
}

/* Insert a element at a specific position, position is 0 index */
void InsertPos(Node_t **head, element_t e, unsigned int position) {
    Node_t *new_node = malloc(sizeof(Node_t));
    new_node->data = e;
    /* If position is 0, same as inserthead */
    if (!position) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node_t *tmp = *head;
    for (unsigned int index = 1; index < position && tmp; index++) {
        tmp = tmp->next;
    }

    if (!tmp)
        return;
    
    new_node->next = tmp->next;
    tmp->next = new_node;
    return;
}

/* Inserting a element in the tail */
void Inserttail(Node_t **head, element_t e) {
    Node_t *tmp = *head;

    /* There aren't any elements at all */
    if (!tmp) {
        tmp = malloc(sizeof(Node_t));
        tmp->data = e;
        tmp->next = *head;
        *head = tmp;
        return;
    }

    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = malloc(sizeof(Node_t));
    tmp->next->data = e;
    tmp->next->next = NULL;
    return;
}

/* Delete the head element of the linked list */
void Removehead(Node_t **head) {
    if (!*head)
        return;

    Node_t *tmp = (*head)->next;
    free(*head);
    *head = tmp;
    return;
}

/* Delete a specific position of node in the linked list, the position started with 0 */
void DeletePos(Node_t **head, unsigned int position) {
    if (!*head)
        return;
    
    Node_t *tmp = *head;
    if (!position) {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
        return;
    }
    
    for (unsigned int index = 1; index < position && tmp; index++)
        tmp = tmp->next;
    
    /* Invalid position */
    if (!tmp || !tmp->next)
        return;
    
    Node_t *del = tmp->next;
    tmp->next = del->next;
    free(del);
    return;
}

/* Delete the tail element of the linked list */
void Removetail(Node_t **head) {
    if (!*head)
        return;
    
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    
    Node_t *tmp = *head;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    
    Node_t *del = tmp->next;
    tmp->next = del->next;
    free(del);
    return;
}

/* Reverse all the nodes the linked list */
void ReverseList(Node_t **head) {
    if (!(*head) || (*head)->next == NULL)
        return;
    
    Node_t *left = *head;
    Node_t *mid = left->next;
    Node_t *right = mid->next;
    left->next = NULL;
    while (right) {
        mid->next = left;
        left = mid;
        mid = right;
        right = right->next;
    }
    mid->next = left;
    *head = mid;
    return;
}

/* Sort the elements in the linked list */
void SortList(Node_t **head) {
    *head = MergeSort(*head);
}

/* Using merge sort */
Node_t *MergeSort(Node_t *head) {
    Node_t *left = head, *right = head;
    while (right && right->next) {
        left = left->next;
        right = right->next->next;
    }

    if (left == right)
        return left;

    Node_t *tmp = head;

    while (tmp->next != left)
        tmp = tmp->next;
    tmp->next = NULL;

    right = left;
    left = head;

    left = MergeSort(left);
    right = MergeSort(right);

    // Now both left and right are sorted
    if (left->data <= right->data) {
        head = left;
        left = left->next;
    }
    else {
        head = right;
        right = right->next;
    }
    
    tmp = head;
    
    while (left && right) {
        if (left->data <= right->data){
            head->next = left;
            left = left->next;
        }
        else {
            head->next = right;
            right = right->next;
        }
        head = head->next;
    }

    if (!left)
        head->next = right;
    
    if (!right)
        head->next = left;

    return tmp;
}

/* Return the linked list length */
unsigned int ListLength(Node_t **head) {
    Node_t *tmp = *head;
    unsigned int len = 0;
    while (tmp) {
        tmp = tmp->next;
        len++;
    }
    
    return len;
}

/* Delete all the duplicate elements in the linked list (the list is sorted) */
void DeleteDup(Node_t **head) {
    Node_t *tmp_head = malloc(sizeof(Node_t));
    tmp_head->data = 0;
    tmp_head->next = *head;

    Node_t *detect = *head;
    Node_t *hold = tmp_head;

    while (detect->next != NULL) {
        if (detect->data == detect->next->data) {
            while (detect->data == detect->next->data) {
                Node_t *tmp = detect->next->next;
                free(detect->next);
                detect->next = tmp;

                if (!detect->next)
                    break;
            }

            hold->next = detect->next;
            free(detect);
            detect = hold->next;

            if (!detect) {
                *head = tmp_head->next;
                free(tmp_head);
                return;
            }

            continue;
        }

        hold = detect;
        detect = detect->next;
    }

    *head = tmp_head->next;
    free(tmp_head);
}