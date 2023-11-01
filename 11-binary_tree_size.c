#include "binary_trees.h"

/**
 * binary_tree_size - function to measure size of a binary tree
 * @tree: root node pointer
 *
 * Return: height on success or 0 on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t bsize = 0;

	if (!tree)
		return (0);

	bsize += binary_tree_size(tree->left);
	bsize += binary_tree_size(tree->right);
	bsize += 1;
	return (bsize);
}
