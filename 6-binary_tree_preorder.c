#include "binary_trees.h"

/**
 *binary_tree_preorder - goes through a binary tree using pre-order traversal
 *@tree: ptr to the root node
 *@func: ptr to function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (func == NULL || tree == NULL)
return;
else
{
func(tree->n);
binary_tree_preorder(tree->left, (*func));
binary_tree_preorder(tree->right, (*func));
}
}
