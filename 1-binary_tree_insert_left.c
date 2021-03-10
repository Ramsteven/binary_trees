#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that that inserts a
 * node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to store in the new node
 * Return: the node created or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
		return (NULL);
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	node->n = value;
	node->parent = parent;

	return (node);
}
