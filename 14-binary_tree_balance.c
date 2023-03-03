#include "binary_trees.h"

/**
 * bt_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary or 0 if the tree is NULL
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0, height;

	if (tree == NULL)
		return (0);

	lh = tree->left ? bt_height(tree->left) + 1 : 1;
	rh = tree->right ? bt_height(tree->right) + 1 : 1;

	height = max(lh, rh);

	return (height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bt_height(tree->left) - bt_height(tree->right));
}
