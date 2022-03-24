#include "binary_trees.h"
/**
 * binary_tree_height - get  height
 * @tree: t
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int a, b;
if (tree == NULL)
return (0);
a = binary_tree_height(tree->left);
b = binary_tree_height(tree->right);
if (a > b)
return (a + 1);
else
return (b + 1);
}
/**
 * binary_tree_balance - measure balance factor
 * @tree: tree
 * Return: the height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int r, l;
if (tree == NULL)
return (0);
l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);
return (l - r);
}
