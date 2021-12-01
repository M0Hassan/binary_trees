#include "binary_trees.h"
/**
* binary_tree_depth - measure the depth of a node
* @tree: node
* Return: the level of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (!tree)
return (0);

if (!tree->parent)
return (depth);

depth = 1 + binary_tree_depth(tree->parent);
return (depth);
}
