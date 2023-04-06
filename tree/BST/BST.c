#include "BST.h"

/* Initialize a tree */
TN_t *InitTree(void) {
    return NULL;
}

/* Destroy a tree */
void DestroyTree(TN_t *root) {
    if (root->left)
        DestroyTree(root->left);
    if (root->right)
        DestroyTree(root->right);
    free(root);
}

/* Return the tree depth */
unsigned int TreeDepth(TN_t *root) {
    if (!root)
        return 0;
    unsigned int left_depth = TreeDepth(root->left);
    unsigned int right_depth = TreeDepth(root->right);
    unsigned int max_depth = (left_depth > right_depth) ? left_depth : right_depth;
    return max_depth + 1;
}

/* Insert a specific node to the binary search tree */
TN_t *InsertNode(TN_t *root, int val)
{
    if (!root) {
        root = malloc(sizeof(TN_t));
        root->val = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    TN_t *rt = root;
    TN_t *l, *r;
    if (root->val > val) {
        l = InsertNode(root->left, val);
        root->left = l;
    }
    else {
        r = InsertNode(root->right, val);
        root->right = r;
    }
    return rt;
}

/* Preorderly traverse the binary search tree */
void PreOrderTraverse(TN_t *root) {
    if (!root) {
        // printf("NULL ");
        return;
    }
    printf("[%2d] ", root->val);
    PreOrderTraverse(root->left);
    PreOrderTraverse(root->right);
}

/* Inorderly traverse the binary search tree */
void InOrderTraverse(TN_t *root) {
        if (!root) {
        // printf("NULL ");
        return;
    }
    InOrderTraverse(root->left);
    printf("[%2d] ", root->val);
    InOrderTraverse(root->right);
}

/* Postorderly traverse the binary search tree */
void PostOrderTraverse(TN_t *root) {
        if (!root) {
        // printf("NULL ");
        return;
    }
    PostOrderTraverse(root->left);
    PostOrderTraverse(root->right);
    printf("[%2d] ", root->val);
}