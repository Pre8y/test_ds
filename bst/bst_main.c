#include<stdio.h>
#include"bst.h"

int main(int argc, char **argv)
{
	node *root = init();
	insert(&root, 5);
	printf("\nafter one node--\n");
	inorder(root);
	insert(&root, 4);
	printf("\nafter two nodes--\n");
	inorder(root);
	insert(&root, 6);
	printf("\nafter three nodes--\n");
	inorder(root);

	insert(&root, 5);
	printf("\nafter four nodes--\n");
	inorder(root);
	return 0;
}
