#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts  node as rigth node
 * @parent: root node
 * @value: value
 * Return: newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}
