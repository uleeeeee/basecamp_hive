#include "ft_btree.h"
#include <stdio.h>

void printPostorder(t_btree *node)
{
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    printf("%s ", node->item);
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(t_btree *node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the item of node */
    printf("%s ", node->item);
 
    /* now recur on right child */
    printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(t_btree *node)
{
    if (node == NULL)
        return;
 
    /* first print item of node */
    printf("%s ", node->item);
 
    /* then recur on left sutree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}

t_btree *btree_create_node(void *item); 
/* Driver program to test above functions*/
int main()
{
    t_btree  *root = btree_create_node("root");
    root->left = btree_create_node("root_left");
    root->left->left = btree_create_node("root_left_left");
    //root->left->left = btree_create_node();
    root->left->right = btree_create_node("root_left_right");
 
	//bta(root, &ft_putnbr);
    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);
 
    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
 
    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);
	printf("\n");
    //getchar();
    return 0;
}