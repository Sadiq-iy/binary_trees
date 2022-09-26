#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of tree, else if tree NULL zero.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
if (tree == NULL)
{
return (0);
}
size = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
return (size);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, size, i, perfect = 2;
height = binary_tree_height(tree) + 1;
size = binary_tree_size(tree);

for (i =  1; i < height; i++)
{
perfect = perfect * 2;
}
perfect--;
if (perfect == size)
{
return (1);
}
return (0);
}
