#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *@tree:  is a pointer of the tree to count the number of leaves
 *Return: if tree is NULL 0 or the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (binary_tree_leaves(tree->left)
				+ binary_tree_leaves(tree->right) + 1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
