#include "binary_trees.h"

size_t height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (left - right);
}

/**
 * height - height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */

size_t height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = height(tree->left);
	right = height(tree->right);

	if (left >= right)
		return (left + 1);

	return (right + 1);
}
