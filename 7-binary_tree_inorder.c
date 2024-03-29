#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - This function goes through a binary tree
 *                       using in-order traversal.
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Inorder traversal:
 *      1- Visit all the nodes in the left subtree
 *      2- Then the root node
 *      3- Visit all the nodes in the right subtree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
