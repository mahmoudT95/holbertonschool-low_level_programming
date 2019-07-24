#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to node to find uncle
 *
 * Return: Uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent->parent)
	{
		if (node->parent->parent->left->n != node->parent->n)
			return (node->parent->parent->left);
		else if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);
	}
	return (NULL);
}
