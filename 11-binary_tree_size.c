#include "binary_trees.h"

/**
 *binary_tree_size - function that measures the size
 *@tree:  ptr to the node
 *Return: size of b tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t node;
if (tree == NULL)
return (0);
else
node = binary_tree_size(tree->right) +
1 + binary_tree_size(tree->left);
return (node);
}
