#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * Return: a pointer to the uncle node or null 
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
	{
		return NULL;
	}

	if (parent->parent == NULL)
	{
		return NULL;
	}
	if (parent == parent->parent->left)
	{
		return parent->parent->right;
	} 
	else
	{
		return parent->parent->left;
	}
}
