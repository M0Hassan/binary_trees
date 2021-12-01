#include "binary_trees.h"
/**
* binary_tree_insert_left - insert a node to the left
* @parent: is a pointer to the parent node of the node to create
* @value: is the value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *tmp, *node_new;

if (!parent)
return (NULL);

if (!parent->left)
{
parent->left = (binary_tree_node(parent, value));
return (parent);
}
else
{
tmp = parent->left;
node_new = (binary_tree_node(parent, value));
node_new->left = tmp;
tmp->parent = node_new;
parent->left = node_new;
return (node_new);
}
}
