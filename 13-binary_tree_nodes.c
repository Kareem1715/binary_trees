#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - This function counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: pointer to the node of the tree to count the number of nodes
 *
 * Return: nodes of binary tree or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);

	if (tree->left && tree->right)
		return (3);
	else if (tree->left || tree->right)
		return (1);

	return (0);
}
