#include "binary_trees.h"
/**
* binary_tree_insert_right - insert a node to the right
* @parent: is a pointer to the parent node of the node to create
* @value: is the value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *tmp, *node_new;

if (!parent)
return (NULL);

if (!parent->right)
{
parent->right = (binary_tree_node(parent, value));
return (parent);
}
else
{
tmp = parent->right;
node_new = (binary_tree_node(parent, value));
node_new->right = tmp;
tmp->parent = node_new;
parent->right = node_new;
return (node_new);
}
}
