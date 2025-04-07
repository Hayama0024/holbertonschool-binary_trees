#include "binary_trees.h"
/**
 *
 *
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth = binary_tree_depth(tree->left);
        size_t right_depth = binary_tree_depth(tree->right);


	if (tree == NULL)
	{
		return (0);
	}
		return (left_depth > right_depth ? left_depth : right_depth) +1;
	}
