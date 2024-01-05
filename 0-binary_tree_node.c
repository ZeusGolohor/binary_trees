#include "binary_trees.h"

/**
 * binary_tree_node - A function used to create a new bnode.
 * @parent: parent node of te new node.
 * @value: the data to be inserted into the new node.
 * Return: binary_tree_t *.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = create_bnode(parent, value);
	if (newnode == NULL)
		return (NULL);
	return (newnode);
}

/**
 * create_bnode - Used to create a new node.
 * @parent: parent node of the new node to be created.
 * @value: the data to be inserted into the node node.
 * Return: binary_tree_t *
 */
binary_tree_t *create_bnode(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
/*	newnode->left = malloc(sizeof(binary_tree_t *));
	newnode->right = malloc(sizeof(binary_tree_t *));
	newnode->parent = malloc(sizeof(binary_tree_t *));
	if ((newnode->left == NULL) || (newnode->right == NULL) ||
		(newnode->parent == NULL))
		return (NULL);*/
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	return (newnode);
}
