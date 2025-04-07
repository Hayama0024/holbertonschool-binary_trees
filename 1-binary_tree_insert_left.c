#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node in the left side of the btree
 *@parent: pointer to the parent node
 *@value: number value in the node
 * Return: pointer of the new node
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	
	binary_tree_t *new_node, *tmp;


	if (parent == NULL)
	{
		return (NULL);
	}
	tmp = parent->left;
	new_node = binary_tree_node(parent, value);
	parent->left = new_node;
	if (tmp == NULL)
	{
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	return (new_node);
}
