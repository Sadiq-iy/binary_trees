#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 * Return: 0 if tree is NULL else number of nodes in tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t node_count = 0;
if (tree == NULL)
{
return (0);
}
if (!(tree->left == NULL) || !(tree->right == NULL))
{
node_count++;
}
node_count += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
return (node_count);
}
