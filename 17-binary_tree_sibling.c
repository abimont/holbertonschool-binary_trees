#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node or NULL if it fails
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->n < node->parent->n)
	{
		if (node->parent->right == NULL)
			return (NULL);
		else
			return (node->parent->right);
	}
	if (node->n > node->parent->n)
	{
		if (node->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->left);
	}
	return (NULL);
}
