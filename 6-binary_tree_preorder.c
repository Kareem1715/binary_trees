#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - This function goes through a binary tree
 * using pre-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Preorder traversal:
 *      1- Visit root node
 *      2- Visit all the nodes in the left subtree
 *      3- Visit all the nodes in the right subtree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
