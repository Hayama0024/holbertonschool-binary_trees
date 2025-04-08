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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height == right_height)
		{
			left_perfect = binary_tree_is_perfect(tree->left);
			right_perfect = binary_tree_is_perfect(tree->right);
			return (left_perfect && right_perfect);
		}
	}
return (0);
}
