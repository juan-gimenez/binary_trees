#include "binary_trees.h"

/**
 *binary_tree_nodes - get number of nodes
 *with one child at least
 *@tree:  pointer to the root
 *Return: number of the nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->right || tree->left)
return (1 + binary_tree_nodes(tree->left) +
	binary_tree_nodes(tree->right));
else
return (0);
}
