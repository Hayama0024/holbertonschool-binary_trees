#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts new node on right side of parent node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new rode
 * Return: pointer to new _node; or NULL
 * Description: If parent already has a right-child, the new node takes its
 * place and the old right-child becomes the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
