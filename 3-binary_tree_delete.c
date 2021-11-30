#include "binary_trees.h"
/**
 * binary_tree_delete - delete a binary tree
 * @tree: tree to be deleted
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
  if (!tree)
    return;
  binary_tree_delete(tree->right);
  binary_tree_delete(tree->left);
  free(tree);
}
