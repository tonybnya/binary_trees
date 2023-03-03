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

	lh = tree->left ? bt_height(tree->left) + 1 : 0;
	rh = tree->right ? bt_height(tree->right) + 1 : 0;

	height = max(lh, rh);

	return (height);
}

/**
 * bt_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0 or if tree is NULL
 */
int bt_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (bt_full(tree->left) && bt_full(tree->right));

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if true, otherwise 0 or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	if (bt_full(tree) == 0)
		return (0);

	lh = bt_height(tree->left);
	rh = bt_height(tree->right);

	if (lh != rh)
		return (0);

	return (1);
}
