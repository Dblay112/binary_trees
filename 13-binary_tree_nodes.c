#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes in the tree
 * @tree: root node pointer to use in counting
 *
 * Return: 0 on failure - nodes on success
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->right);
		nodes += binary_tree_nodes(tree->left);
	}
	return (nodes);
}
