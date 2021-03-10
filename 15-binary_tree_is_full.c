#include "binary_trees.h"
/**
 * binary_tree_is_full - function that measures
 * the depth of a tree in a binary tree
 * @tree:  to the root tree of the
 * tree to count the number of leaves
 * of the tree to traverse
 * Return: the number of leaves
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
