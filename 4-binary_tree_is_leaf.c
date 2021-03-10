#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node:  is a pointer pointer to the node to check
 * Return: void function
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->parent || node->left || node->right)
		return (0);
	return (1);
}
