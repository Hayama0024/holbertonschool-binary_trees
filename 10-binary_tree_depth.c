#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of the tree
 *@tree: pointer to the node
 * Return: the depth of the three
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
		return (0);
}
