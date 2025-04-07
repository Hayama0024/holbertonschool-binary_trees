#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: a pointer to count the number of nodes
 * Return: if tree is null 0, otherwise the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
}
