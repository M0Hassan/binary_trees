#include "binary_trees.h"
/**
* binary_tree_is_leaf - check if a node is a leaf
* @node: tree node
* Return: 0 false, 1 true
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);

if (!node->left && !node->right)
return (1);
else
return (0);
}
