#include "binary_trees.h"

/**
 * binary_tree_insert_right -  to insert a new bnode right.
 * @parent: parent node of the new node to be created.
 * @value: the data to be inserted into the node node.
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	else if (parent->right == NULL)
	{
		newnode = create_bnode(parent, value);
		if (newnode == NULL)
			return (NULL);
		parent->right = newnode;
	}
	else if (parent->right != NULL)
	{
		newnode = create_bnode(parent, value);
		if (newnode == NULL)
			return (NULL);
		parent->right->parent = newnode;
		newnode->right = parent->right;
		parent->right = newnode;
	}
	return (newnode);
}
