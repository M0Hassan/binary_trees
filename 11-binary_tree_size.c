#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
  size_t left = 1, right = 1;

  if (!tree)
    return (0);
  if (tree->left)
    left = 1 + binary_tree_size(tree->left);
  if (tree->right)
    right = 1 + binary_tree_size(tree->right);

  return (left + right - 1);
}
