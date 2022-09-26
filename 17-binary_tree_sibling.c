#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_sibling -  finds the sibling of a node
 *
 * @node: node to find sibling
 * Return: pointer to sibling else if node is NULL of node is root return zero
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node ==  NULL || node->parent == NULL)
{
return (0);
}
if (node == node->parent->left)
{
return (node->parent->right);
}
return (node->parent->left);
}
