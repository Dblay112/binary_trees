#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert node to the right of parent
 * @parent: parent node
 * @value: new node value
 *
 * Return: new node pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!parent)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
		return (NULL);
	right_node->n = value;
	right_node->left = NULL;
	right_node->right = NULL;
	right_node->parent = parent;
	if (parent->right)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
