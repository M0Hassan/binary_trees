#include "binary_trees.h"
/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the root node of the tree to measure the height.
* Return: height of the tree or 0 if NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node)
return (NULL);
if (node->parent)
{
if (node->parent->left && node->parent->right)
{
if (node->n == node->parent->right->n)
return (node->parent->left);
else
return (node->parent->right);
}
else
return (NULL);
}
return (NULL);
}
/**
* binary_tree_uncle - function that finds the uncle of a node
* @node: pointer to the root node of the tree to measure the height.
* Return: height of the tree or 0 if NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node)
return (NULL);
if (node->parent && node->parent->parent)
return (binary_tree_sibling(node->parent));
return (NULL);
}
