#include "binary_trees.h"

/**
 * binary_tree_preorder - a function to print a binary
 * tree in preorder.
 * @tree: the binary tree to be printed.
 * @func: a function used to print node data.
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		preorder_left_tree(tree->left, func);
		preorder_right_tree(tree->right, func);
	}
}

/**
 * preorder_left_tree - a function to print left bnode.
 * @tree: the btree to be printed.
 * @func: a function used to print bnode data.
 * Return: void.
 */
void preorder_left_tree(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		preorder_left_tree(tree->left, func);
		if (tree->right != NULL)
			preorder_right_tree(tree->right, func);
	}
}

/**
 * preorder_right_tree - a function to print right bnode.
 * @tree: the btree to be printed.
 * @func: a func to print right bnodes.
 * Return: void.
 */
void preorder_right_tree(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		if (tree->left != NULL)
			preorder_left_tree(tree->left, func);
		preorder_right_tree(tree->right, func);
	}
}
