#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - This function deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree); /* Postorder traverse */

}
