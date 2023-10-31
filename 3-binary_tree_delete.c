#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - function to delete binary tree
 * @tree: pointer of root node to be deleted from tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
