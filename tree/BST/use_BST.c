#include "BST.h"

int main(void)
{
    TN_t *root = NULL;
    root = InitTree();

    root = InsertNode(root, 10);
    root = InsertNode(root, 6);
    root = InsertNode(root, 12);
    root = InsertNode(root, 3);
    root = InsertNode(root, 8);
    root = InsertNode(root, 11);
    root = InsertNode(root, 15);
    root = InsertNode(root, 5);
    root = InsertNode(root, 7);
    root = InsertNode(root, 2);
    root = InsertNode(root, 1);

    PreOrderTraverse(root);
    printf("\n");
    InOrderTraverse(root);
    printf("\n");
    PostOrderTraverse(root);
    printf("\n");

    printf("The depth of the binary tree is %u\n", TreeDepth(root));

    root = RotateRight(root);

    printf("The right rotated tree : \n");
    PreOrderTraverse(root);
    printf("\n");

    root = RotateLeft(root);

    printf("The left rotated tree : \n");
    PreOrderTraverse(root);
    printf("\n");

    DestroyTree(root);
    return 0;
}