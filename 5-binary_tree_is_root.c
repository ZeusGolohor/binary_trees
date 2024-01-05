#include "binary_trees.h"

/**
 * binary_tree_is_root - to check if a node is the
 * root.
 * @node: the node to check.
 * Return: int.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
