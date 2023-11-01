#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: root node pointer
 *
 * Return: pointer to a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	else if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
