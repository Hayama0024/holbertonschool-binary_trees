#include "binary_trees.h"
/**
 *binary_tree_delete - delete a tree
 *@tree: pointer to root of the tree
 *
 * Return: no return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		free(tree);
	}
}
