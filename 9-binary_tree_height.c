#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = 0;
	right_height = 0;

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height);

	return (right_height);
}
