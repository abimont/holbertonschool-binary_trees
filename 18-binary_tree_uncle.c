#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node or NULL if it fails
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->n < node->parent->parent->n)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		else
			return (node->parent->parent->right);
	}
	if (node->parent->n > node->parent->parent->n)
	{
		if (node->parent->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
