#include "binary_trees.h"

/**
 *binary_tree_depth - function that measures the depth
 *@tree:  ptr to the node
 *Return: depth of b tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t node;
node = 0;
if (tree == NULL)
return (0);
if (tree->parent)
node = 1 + binary_tree_depth(tree->parent);
return (node);
}
