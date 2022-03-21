#include "binary_trees.h"

 /**
  * binary_tree_insert_left - inserts a node
  *@parent : pointer to the node to insert the left-child in
  *@value: value
  * Return: 0
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *tmp;

  if (!parent)
    return (NULL);
  tmp = malloc(sizeof(binary_tree_t));
  /**
     chech if malloc fails
  */
  if (!temp)
    return (NULL);
  tmp->left = tmp->right = NULL;
  tmp->n = value;
  tmp->parent = parent;
  if (parent->left)
    {
      parent->left->parent = tmp;
      tmp->left = parent->left;
    }
  parent->left = tmp;
  /**
return the new node with value
  */
  return (tmp);
}
