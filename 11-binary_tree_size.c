#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - This function measures the size of a binary tree
 *
 * @tree: pointer to the node of the tree to measure the size
 *
 * Description: size of binary tree is the number or nodes
 * example -> a leaf by itself has a size 1.
 *
 * Return: size of binary tree or 0 if tree is NULL
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

}
