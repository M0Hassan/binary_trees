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
/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the
 * two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
  size_t fdepth, sdepth;

  if (!first || !second)
    return (NULL);
  fdepth = binary_tree_depth(first);
  sdepth = binary_tree_depth(second);
  if (first->parent->n == second->n)
    return (first->parent);
  else if (second->parent->n == first->n)
    return (second->parent);
  while (fdepth > sdepth)
    {
      first = first->parent;
      fdepth--;
    }
  while (sdepth > fdepth)
    {
      second = second->parent;
      sdepth--;
    }
  while (first && second)
    {
      if (first == second)
	return ((binary_tree_t *)first);
      first = first->parent;
      second = second->parent;
    }
  return ((binary_tree_t *)second);
}
