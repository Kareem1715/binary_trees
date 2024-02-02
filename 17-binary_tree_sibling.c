#include "binary_trees.h"

/**
 * binary_tree_sibling - This function finds the sibling of a node
 *
 * @node: pointer to the node of the tree to find the sibling
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
