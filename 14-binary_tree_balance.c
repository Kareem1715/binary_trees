#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
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
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = (tree->left ? 1 + binary_tree_balance(tree->left) : 0);
	right_height = (tree->right ? 1 + binary_tree_balance(tree->right) : 0);

	return (left_height - right_height);
}
