#include "binary_trees.h"

/**
 *binary_tree_delete - function that deletes a binary tree
 *@tree:pointer to the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
