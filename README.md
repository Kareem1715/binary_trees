# Binary trees

In this project we will learn:

- [x] What is a binary tree
- [x] What is the difference between a binary tree and a Binary Search Tree
- [x] What is the possible gain in terms of time complexity compared to linked lists
- [x] What are the depth, the height, the size of a binary tree
- [x] What are the different traversal methods to go through a binary tree
- [x] What is a complete, a full, a perfect, a balanced binary tree

## Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

```c
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
```


***Binary Search Tree***

`typedef struct binary_tree_s bst_t;`

***AVL Tree***

`typedef struct binary_tree_s avl_t;`

***Max Binary Heap***

`typedef struct binary_tree_s heap_t;`
