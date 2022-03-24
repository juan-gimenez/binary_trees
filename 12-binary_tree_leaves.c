#include "binary_trees.h"

/**
 *binary_tree_leaves - get the number of leaves
 *@tree: pointer to the root
 *Return: amount of leaves in b tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->right == NULL && tree->left == NULL)
return (1);
else
return (binary_tree_leaves(tree->left) +
	binary_tree_leaves(tree->right));
}
