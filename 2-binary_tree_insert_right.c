#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node
 *@parent : pointer to the node to insert the right-child
 *@value: value
 * Return: 0
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *tmp;

if (!parent)
return (NULL);
tmp = malloc(sizeof(binary_tree_t));
if (!temp)
return (NULL);
tmp->left = NULL;
tmp->right = NULL;
tmp->n = value;
tmp->parent = parent;
if (parent->right)
{
parent->right->parent = tmp;
tmp->right = parent->right;
}
parent->right = tmp;
return (tmp);
}
