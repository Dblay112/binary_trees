#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves in a binary tree
 * @tree: root node pointer.
 *
 * Return: leaves counted
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_count = 0;

	if (tree)
	{
		l_count += (!tree->left && !tree->right) ? 1 : 0;
		l_count += binary_tree_leaves(tree->left);
		l_count += binary_tree_leaves(tree->right);
	}
	return (l_count);
}
