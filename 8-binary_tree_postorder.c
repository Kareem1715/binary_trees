#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - This function goes through a binary tree
 *                         using Postorder traversal.
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Postorder traversal:
 *      1- Visit all the nodes in the left subtree
 *      2- Visit all the nodes in the right subtree
 *      3- Then the root node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
