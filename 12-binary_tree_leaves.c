#include "binary_trees.h"
/**
 * binary_tree_leaves - function that measures
 * the depth of a tree in a binary tree
 * @tree:  to the root tree of the
 * tree to count the number of leaves
 * of the tree to traverse
 * Return: the number of leaves
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
