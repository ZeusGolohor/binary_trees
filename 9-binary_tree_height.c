#include "binary_trees.h"

/**
 * binary_tree_height - a function to get the height of
 * of a node.
 * @tree: the node to traverse.
 * Return: size_t.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hlsbtt = 0, *hlsbt = &hlsbtt, **hlst = &hlsbt;
	size_t hrsbtt = 0, *hrsbt = &hrsbtt, **hrst = &hrsbt;

	if (tree == NULL)
		return (0);
	else if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (0);
	}
	else
	{
		hcal_left_tree(tree->left, hlst);
		hcal_right_tree(tree->right, hrst);
		if (**hlst >= **hrst)
			return (**hlst);
		return (**hrst);
	}
	return (0);
}

/**
 * hcal_left_tree - a function to calculate left node height.
 * @tree: the node to traverse.
 * @hl: height of left node.
 * Return: void.
 */
void hcal_left_tree(const binary_tree_t *tree, size_t **hl)
{
	if (tree != NULL)
	{
		**hl = **hl + 1;
		hcal_left_tree(tree->left, hl);
		if (tree->right != NULL)
		{
			**hl = **hl - 1;
			hcal_right_tree(tree->right, hl);
		}
	}
}

/**
 * hcal_right_tree - a function to cal. right nodes.
 * @tree: the node to traverse.
 * @hr: height of right node.
 * Return: void.
 */
void hcal_right_tree(const binary_tree_t *tree, size_t **hr)
{
	if (tree != NULL)
	{
		**hr = **hr + 1;
		if (tree->left != NULL)
		{
			**hr = **hr - 1;
			hcal_left_tree(tree->left, hr);
		}
		hcal_right_tree(tree->right, hr);
	}
}
