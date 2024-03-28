#include "binary_trees.h"
/**
 * is_descendant - checks if a node is descendant of another
 * @ancestor: root node
 * @node: child node
 * Return: 1 or 0
 */
int is_descendant(const binary_tree_t *ancestor, const binary_tree_t *node)
{
	while (node != NULL)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}
	return (0);
}

/**
 * binary_tree_ancestor - finds the lowest common ancstor of two nodes
 * @first: first node
 * @second: second node
 * Return: ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor = first;

	while (ancestor != NULL)
	{
		if (is_descendant(ancestor, second))
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}
	return (NULL);
}
