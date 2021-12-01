#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
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
