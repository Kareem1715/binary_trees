#include "binary_trees.h"

size_t height(binary_tree_t *tree);

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 *
 * @tree: pointer to the node of the tree to check
 *
 *
 * Return: 1 if perfect or 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	if (tree->left && tree->right && height(tree->left) == height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	else if (tree->left || tree->right) /* Not perfect BT */
		return (0);

	else /* Perfect BT */
		return (1);
}

/**
 * height - This function measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: Height of binary tree or 0 if tree is NULL
 */
size_t height(binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (-1); /* Height of empty subtree is -1 */

	left_height = (tree->left ? 1 + height(tree->left) : 0);
	right_height = (tree->right ? 1 + height(tree->right) : 0);

	return (left_height > right_height ? left_height : right_height);
}
