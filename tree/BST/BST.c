#include "BST.h"

/* Initialize a tree */
TN_t *InitTree(void) {
    return NULL;
}

/* Destroy a tree */
void DestroyTree(TN_t *root);

/* Return the tree depth */
unsigned int TreeDepth(TN_t *root);

/* Insert a specific node to the binary search tree */
TN_t *InsertNode(TN_t *root, int val);

/* Preorderly traverse the binary search tree */
void PreOrderTraverse(TN_t *root) {
    if (!root)
        return;
    printf("%d", root->val);
    PreOrderTraverse(root->)
}

/* Inorderly traverse the binary search tree */
void InOrderTraverse(TN_t *root);

/* Postorderly traverse the binary search tree */
void PostOrderTraverse(TN_t *root);