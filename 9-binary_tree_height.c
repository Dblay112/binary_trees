#include "binary_trees.h"

/**
 * binary_tree_height - measurement of tree height
 * @tree: root node pointer
 *
 * Return: 0 on failure - size_t on height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return 0;
	}

	
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height > right_height) ? left_height + 1 : right_height + 1;
}
