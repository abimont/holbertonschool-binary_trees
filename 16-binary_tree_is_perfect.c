#include "binary_trees.h"

int measure(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		size_left = measure(tree->left);
		size_right = measure(tree->right);
	}
	if (size_left == size_right)
		return (1);

	return (0);
}

/**
 * measure - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: measure of a binary tree
 */

int measure(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (measure(tree->left) + measure(tree->right) + 1);
}
