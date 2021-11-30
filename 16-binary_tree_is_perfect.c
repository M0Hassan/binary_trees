#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t left = 0, right = 0;

  if (!tree)
    return (0);
  if (tree->left)
    left = 1 + binary_tree_height(tree->left);
  if (tree->right)
    right = 1 + binary_tree_height(tree->right);
  if (left > right)
    return (left);
  return (right);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
  if (!tree)
    return (0);
  if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
    {
      if (!tree->left && !tree->right)
	return (1);
      if (tree->left && tree->right)
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
    }
  return (0);
}
