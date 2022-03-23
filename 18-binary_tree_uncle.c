#include "binary_trees.h"

/**
 *binary_tree_uncle - gets the uncle of a node
 *@node: pointer to the node
 *Return: node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL ||
node->parent->parent == NULL)
return (NULL);
/** no uncle */
if (node->parent->parent->left == node->parent)
/** if is uncle */
return (node->parent->parent->right);
return (node->parent->parent->left);
}
