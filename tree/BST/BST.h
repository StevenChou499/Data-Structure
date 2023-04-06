#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TN_t;

/* Initialize a tree */
TN_t *InitTree(void);

/* Destroy a tree */
void DestroyTree(TN_t *root);

/* Return the tree depth */
unsigned int TreeDepth(TN_t *root);

/* Insert a specific node to the binary search tree */
TN_t *InsertNode(TN_t *root, int val);

/* Preorderly traverse the binary search tree */
void PreOrderTraverse(TN_t *root);

/* Inorderly traverse the binary search tree */
void InOrderTraverse(TN_t *root);

/* Postorderly traverse the binary search tree */
void PostOrderTraverse(TN_t *root);

/* Rotate the BST to the right and return the new root */
TN_t *RotateRight(TN_t *root);

/* Rotate the BST to the left and return the new root */
TN_t *RotateLeft(TN_t *root);