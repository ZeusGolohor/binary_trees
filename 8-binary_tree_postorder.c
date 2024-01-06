#include "binary_trees.h"

/**
 * binary_tree_postorder - a function to print a binary
 * tree in preorder.
 * @tree: the binary tree to be printed.
 * @func: a function used to print node data.
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		postorder_left_tree(tree->left, func);
		postorder_right_tree(tree->right, func);
		func(tree->n);
	}
}

/**
 * postorder_left_tree - a function to print left bnode.
 * @tree: the btree to be printed.
 * @func: a function used to print bnode data.
 * Return: void.
 */
void postorder_left_tree(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		postorder_left_tree(tree->left, func);
		if (tree->right != NULL)
			postorder_right_tree(tree->right, func);
		func(tree->n);
	}
}

/**
 * postorder_right_tree - a function to print right bnode.
 * @tree: the btree to be printed.
 * @func: a func to print right bnodes.
 * Return: void.
 */
void postorder_right_tree(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		if (tree->left != NULL)
			postorder_left_tree(tree->left, func);
		postorder_right_tree(tree->right, func);
		func(tree->n);
	}
}
