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

	if (node->parent->right->n == node->n) /* If the right */
		return (node->parent->left); /* Return the left */

	else if (node->parent->left->n == node->n) /* If the left */
		return (node->parent->right); /* Return the right */

	else /* Node has no sibling (has no left or right) */
		return (NULL);
}
