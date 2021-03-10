#include "binary_trees.h"
 /**
 * binary_tree_balance -function that measures 
 * the depth of a tree in a binary tree
 * @tree:  to the root tree of the 
 * tree to count the number of leaves
 * of the tree to traverse
 * Return: the number of leaves
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return(0);
	if (tree->left || tree->rigth)
		

	return MAX(binary_tree_balance(tree->left) , binary_tree_balance(tree->left) + 1);
}
