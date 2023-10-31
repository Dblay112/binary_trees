#include "binary_trees.h"

/**
 * binary_tree_is_leaf - node to check(leaf or not) in the binary tree
 * @node: node pointer
 *
 * Return: node is a leaf = 1.
 *         else - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
