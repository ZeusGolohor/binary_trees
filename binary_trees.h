#ifndef TREE
#define TREE
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *create_bnode(binary_tree_t *, int);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
void delete_left_btrees(binary_tree_t *);
void delete_right_btrees(binary_tree_t *);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void preorder_left_tree(const binary_tree_t *, void (*func)(int));
void preorder_right_tree(const binary_tree_t *, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void inorder_right_tree(const binary_tree_t *, void (*func)(int));
void inorder_left_tree(const binary_tree_t *, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
void postorder_right_tree(const binary_tree_t *, void (*func)(int));
void postorder_left_tree(const binary_tree_t *, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
void hcal_left_tree(const binary_tree_t *tree, size_t **);
void hcal_right_tree(const binary_tree_t *tree, size_t **);
#endif
