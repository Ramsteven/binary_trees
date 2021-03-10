#include "binary_trees.h"
 /**
 * binary_tree_size -function that measures
 * the depth of a node in a binary tree
 * @tree:  pointer to the root node
 * of the tree to traverse
 * Return: depth of given node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
