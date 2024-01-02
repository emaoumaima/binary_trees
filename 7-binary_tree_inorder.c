#include "binary_trees.h"

/**
 * binary_tree_inorder - Applies a function to each node in inorder traversal
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to the function to apply to each node's value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
