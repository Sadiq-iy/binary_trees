#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
size_t bal;
if (tree == NULL)
{
return (0);
}
bal = (bt_height(tree->left) - bt_height(tree->right));
return (bal);
}

/**
 * bt_height - measures height of tree
 *
 * @tree: tree to be measured height
 * Return: height of tree.
 */
size_t bt_height(const binary_tree_t *tree)
{
size_t l_count = 0, r_count = 0;
if (tree == NULL)
{
return (-1);
}
if (!(tree->left == NULL) || !(tree->right == NULL))
{
l_count = bt_height(tree->left) + 1;
r_count = bt_height(tree->right) + 1;
}
if (r_count > l_count)
{
return (r_count);
}
return (l_count);
}
