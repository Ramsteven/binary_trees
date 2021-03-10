#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that that inserts a
 * node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to store in the new node
 * Return: the node created or NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
		return (NULL);
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	node->n = value;
	node->parent = parent;

	return (node);
}
