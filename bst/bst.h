#ifndef BST_H
#define BST_H

typedef struct node {
	int data;
	struct node *left, *right;
} node;

node* init(void);
void insert(node **root, int data);
void inorder(node *root);

#endif
