#include "binary_trees.h"

/**
 * binary_tree_delete - A function used to delete a bnode.
 * @tree: a pointer to the root node to delete.
 * Return: void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		delete_left_btrees(tree->left);
		delete_right_btrees(tree->right);
		free(tree);
	}
}

/**
 * delete_left_btrees - A function to delete left
 * trees.
 * @tree: the tree to traverse.
 * Return: void.
 */
void delete_left_btrees(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->right != NULL)
			delete_right_btrees(tree->right);
		delete_left_btrees(tree->left);
		free(tree);
	}
}

/**
 * delete_right_btrees - A function to delete right
 * trees.
 * @tree: the tree to traverse.
 * Return: void.
 */
void delete_right_btrees(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			delete_left_btrees(tree->left);
		delete_left_btrees(tree->right);
		free(tree);
	}
}
