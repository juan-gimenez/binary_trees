#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks if a node is a leaf
 *@node: is a pointer to the node
 *Return: 1 if node is a leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);
if (node->right == NULL && node->left == NULL)
return (1);
else
return (0);
}
