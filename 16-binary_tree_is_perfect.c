#include "binary_trees.h"
/**
*binary_tree_height - display the height of the tree
*@tree: the tree we want to display
* Return: the left or the right height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (1 + left_height);
	}
	else
	{
		return (1 + right_height);
	}
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: The binary tree
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? 1 + left_height : 1 + right_height);
}
