#include "binary_trees.h"

/**
 * binary_tree_uncle - This function finds the uncle of a node
 *
 * @node: pointer to the node of the tree to find the uncle
 *
 * Return: a pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);/* Node has no uncle*/


	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
