#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: 0 or the numbers of siblings
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (!node->parent->left || !node->parent->right)
	{
		return (NULL);
	}
	if (node->n == node->parent->left->n)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

