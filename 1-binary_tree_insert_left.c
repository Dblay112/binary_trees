#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a node as a left-child
 * @parent: node pointer .
 * @value: new node value
 *
 * Return: on error - NULL parent is NULL
 *         else - new node pointer.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
	}
	parent->left = left_child;

	return (left_child);
}
