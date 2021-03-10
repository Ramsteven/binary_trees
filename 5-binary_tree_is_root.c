#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a leaf
 * @node:  is a pointer pointer to the node to check
 * Return: void function
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent || !node)
		return (1);
	return (0);
}
