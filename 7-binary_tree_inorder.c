#include "binary_trees.h"

/**
 * binary_tree_inorder - function using in-order traversal throuh binary tree
 * @tree: root node pointer
 * @func: each node function call pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
