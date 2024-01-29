#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the
 * left child of a given parent node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

    /* check if the parent already has a left child*/
	if (parent->left)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
	}
	/* add node to the left or parent tree */
	parent->left = newnode;

	return (newnode);
}
