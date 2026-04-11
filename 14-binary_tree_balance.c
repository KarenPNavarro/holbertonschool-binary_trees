#include "binary_trees.h"

/**
 * height - measures height including NULL nodes
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height >= right_height)
		return (1 + left_height);

	return (1 + right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)height(tree->left) - (int)height(tree->right));
}
