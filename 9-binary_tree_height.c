#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	lh = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rh = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (max(lh, rh));
}
