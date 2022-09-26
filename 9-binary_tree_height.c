#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_height - measures the height of a binary tree.
* @tree: a pointer to the root node of the tree to measure the height.
* Return: height if tree, if tree is null Return 0.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l_count = 0, r_count = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
l_count = binary_tree_height(tree->left) + 1;
r_count = binary_tree_height(tree->right) + 1;
}
if (r_count > l_count)
{
return (r_count);
}
return (l_count);
}
