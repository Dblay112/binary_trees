#include "binary_trees.h"

/**
 * binary_tree_height - measurement of tree height
 * @tree: root node pointer
 *
 * Return: 0 on failure - size_t on height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t b = 0, d = 0;

		b = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		d = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((b > d) ? b : d);
	}
	return (0);
}
