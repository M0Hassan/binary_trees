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
/**
* printGivenLevel - Counts number of levels in tree
* @tree: is a pointer to the root node of the tree to traverse
* @level: Number of levels
* @func: is a pointer to a function to call for each node
*/
void printGivenLevel(struct binary_tree_s *tree, int level,
		     void (*func)(int))
{
if (!tree)
return;
if (level == 1)
func(tree->n);
else if (level > 1)
{
printGivenLevel(tree->left, level - 1, func);
printGivenLevel(tree->right, level - 1, func);
}
}
/**
* printLevelOrder - Prints nodes of every level
* @tree: is a pointer to the root node of the tree to traverse
* @func: is a pointer to a function to call for each node
*/
void printLevelOrder(struct binary_tree_s *tree,
		     void (*func)(int))
{
int levels, i;

if (!tree)
return;
levels = binary_tree_height(tree) + 1;
for (i = 1; i <= levels; i++)
printGivenLevel(tree, i, func);
}
/**
* binary_tree_levelorder - function that goes through a binary
* tree using level-order traversa
* @tree: is a pointer to the first node
* @func: is a pointer to a function to call for each node
* Return: pointer to the lowest common ancestor node of the
* two given nodes
*/
void binary_tree_levelorder(const binary_tree_t *tree,
			    void (*func)(int))
{
if (!tree || !func)
return;
printLevelOrder((struct binary_tree_s *)tree, func);
}
