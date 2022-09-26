#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_node- creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to store in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

new_node = calloc(1, sizeof(binary_tree_t));
if (!new_node)
{
return (NULL);
}
new_node->n = value;
if (parent == NULL)
{
new_node->parent = NULL;
}
else
{
new_node->parent = parent;
}
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}
