#include "binary_trees.h"

/**
 * binary_tree_postorder - function using post-order
 * traversal throuh binary tree
 * @tree: root node pointer
 * @func: function call to each node pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
