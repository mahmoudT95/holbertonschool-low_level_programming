#include "binary_trees.h"

/**
 * binary_tree_balance - Get balance factor of binary tree
 * @tree: Pointer to root of binary tree
 *
 * Return: Balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);
	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}