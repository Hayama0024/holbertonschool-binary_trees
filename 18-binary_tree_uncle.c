#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *@node: pointer to the node
 * Return: a pointer to the uncle node or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}

	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
