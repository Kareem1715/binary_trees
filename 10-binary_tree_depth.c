#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - This function measures the depth of a node
 * in a binary tree
 *
 * @tree: pointer to the node of the tree to measure the depth
 *
 * Return: depth of binary tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
