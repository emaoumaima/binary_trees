#include "binary_trees.h"

/**
 * bst_insert - Inserts a value into a Binary Search Tree.
 * @tree: A pointer to the root of the BST.
 * @value: The value to insert.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */
bst_node_t *bst_insert(bst_node_t **tree, int value)
{
	bst_node_t *node = NULL;

	if (*tree == NULL)
	{
		node = (bst_node_t *)malloc(sizeof(bst_node_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->value = value;
		node->left = NULL;
		node->right = NULL;
		*tree = node;
	}
	else
	{
		if (value < (*tree)->value)
		{
			node = bst_insert(&(*tree)->left, value);
		}
		else if (value > (*tree)->value)
		{
			node = bst_insert(&(*tree)->right, value);
		}
		else
		{
			/* If the value is already present, do nothing */
			return (NULL);
		}
	}
	return (node);
}

