#include "binary_trees.h"
/**
 *
 *
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;


	if (tree == NULL)
	{
		return (0);
	}
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	return (left_depth > right_depth ? left_depth : right_depth) +1;
}
