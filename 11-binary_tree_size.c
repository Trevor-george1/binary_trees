#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	size = l + r + 1;

	return (size);
}
