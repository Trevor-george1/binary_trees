#include "binary_trees.h"
/**
 * binary_tree_height_b - measures the heigth of a binary tree
 * @tree: root node
 * Return: 0 or height of tree
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}
/**
 * binary_tree_balance - mesearues balance factor
 * @tree: root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_height_b(tree->left);
	r = binary_tree_height_b(tree->right);

	return (l - r);
}
