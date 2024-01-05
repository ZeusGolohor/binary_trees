#include "binary_trees.h"

/**
 * binary_tree_insert_left -  to insert a new bnode left.
 * @parent: parent node of the new node to be created.
 * @value: the data to be inserted into the node node.
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	else if (parent->left == NULL)
	{
		newnode = create_bnode(parent, value);
		if (newnode == NULL)
			return (NULL);
		parent->left = newnode;
	}
	else if (parent->left != NULL)
	{
		newnode = create_bnode(parent, value);
		if (newnode == NULL)
			return (NULL);
		parent->left->parent = newnode;
		newnode->left = parent->left;
		parent->left = newnode;
	}
	return (newnode);
}
