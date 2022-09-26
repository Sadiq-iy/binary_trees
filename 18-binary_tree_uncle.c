#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: node to find uncle of.
 * Return: - If node is NULL, return NULL
 * - If node has no uncle, return NULL
 * -else return node uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (0);
}
return (binary_tree_sibling(node->parent));
}

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
