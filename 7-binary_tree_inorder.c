#include "binary_trees.h"

/**
 * binary_tree_inorder - In-Order Traversal
 *
 * @tree: Pointer to the node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: If tree of func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree == NULL || func == NULL)
                return;

        binary_tree_inorder(tree->left, func);
        func(tree->n);
        binary_tree_inorder(tree->right, func);
}
