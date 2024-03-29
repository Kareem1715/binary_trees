#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - This function inserts a
 * node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (!parent->right)
		parent->right = newNode;
	else
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
		parent->right = newNode;
	}
	return (newNode);
}
