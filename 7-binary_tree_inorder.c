#include "binary_trees.h"

/**
 * binary_tree_inorder - a function to print a binary
 * tree in preorder.
 * @tree: the binary tree to be printed.
 * @func: a function used to print node data.
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		inorder_left_tree(tree->left, func);
		func(tree->n);
		inorder_right_tree(tree->right, func);
	}
}

/**
 * inorder_left_tree - a function to print left bnode.
 * @tree: the btree to be printed.
 * @func: a function used to print bnode data.
 * Return: void.
 */
void inorder_left_tree(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		inorder_left_tree(tree->left, func);
		func(tree->n);
		if (tree->right != NULL)
			inorder_right_tree(tree->right, func);
	}
}

/**
 * inorder_right_tree - a function to print right bnode.
 * @tree: the btree to be printed.
 * @func: a func to print right bnodes.
 * Return: void.
 */
void inorder_right_tree(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		if (tree->left != NULL)
			inorder_left_tree(tree->left, func);
		func(tree->n);
		inorder_right_tree(tree->right, func);
	}
}
