#include "binary_trees.h"
#include <stdlib.h>

size_t balance_height(binary_tree_t *tree);

/**
 * binary_tree_is_full - This function checks if a binary tree is full
 *
 * @tree: pointer to the node of the tree to check
 *
 * Description:
 *         BALANCE FACTOR = HEIGHT(LEFT SUBTREE) − HEIGHT(RIGHT SUBTREE)
 *
 * Return: 1 if full or 0 if tree is NULL or not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	if (tree->left && tree->right) /* Check for full BT*/
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	else if (tree->left || tree->right) /* Not full subtree*/
		return (0); /* Have a one child */

	else /* Full BT (leaf -> not have a childs) */
		return (1);
}
