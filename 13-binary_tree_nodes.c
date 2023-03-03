#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes, or 0 if tree is NULL
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (nodes);
	}

	return (0);
}
