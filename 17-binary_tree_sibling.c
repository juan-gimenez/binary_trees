#include "binary_trees.h"

/**
 *binary_tree_sibling - gets the sibling of a node
 *@node: pointer to the node
 *Return: NULL or sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node->parent || !node)
return (NULL);
if (node->parent->right == node)
return (node->parent->left);
if (node->parent->left == node)
return (node->parent->right);
return (NULL);
}
