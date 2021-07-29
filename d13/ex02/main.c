#include "ft_btree.h"
#include <stdio.h>
t_btree        *btree_create_node(void *item);

void    btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void    do_something(void *item)
{
    printf("%s ", item);
}

int        main(void)
{
    t_btree *root;

    root = btree_create_node("1");
    root->left = btree_create_node("2");
    root->right = btree_create_node("3");
    root->left->left = btree_create_node("4");
    root->left->right = btree_create_node("5");

    printf("RESULT: \t");
    btree_apply_inffix(root, &do_something);
    printf("\nEXPECTED: \t1 2 4 5 3\n");
}