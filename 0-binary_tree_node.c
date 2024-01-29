#include "binary_trees.h"

/**
* binary_tree_node - creates a new node for a binary tree
* @parent: pointer to the parent node
* @value: value to be stored in the new node
*
* Return: pointer to the newly created node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

	if (parent == NULL)
	{
		parent = newnode;
		return (parent);
	}

	return (newnode);
}
