#include "binary_trees.h"
#include <stdlib.h>

size_t balance_height(binary_tree_t *tree);

/**
 * binary_tree_balance - This function measures
 * the balance factor of a binary tree
 *
 * @tree: pointer to the node of the tree to measure the balance factor
 *
 * Description:
 *         BALANCE FACTOR = HEIGHT(LEFT SUBTREE) − HEIGHT(RIGHT SUBTREE)
 *
 * Return: banlance factor of binary tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (balance_height(tree->left) - balance_height(tree->right));
}

/**
 * balance_height - This function measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: Height of binary tree or 0 if tree is NULL
 */
size_t balance_height(binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (-1); /* Height of empty subtree is -1 */

	left_height = (tree->left ? 1 + balance_height(tree->left) : 0);
	right_height = (tree->right ? 1 + balance_height(tree->right) : 0);

	return (left_height > right_height ? left_height : right_height);
}
