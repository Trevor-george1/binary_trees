#include "binary_trees.h"
/**
 * binary_tree_height - measures the heigth of a binary tree
 * @tree: root node
 * Return: 0 or height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
		return (0);
	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);
	if (left_depth > right_depth)
	{
		return (left_depth + 1);
	}
	else
		return (right_depth + 1);
}
