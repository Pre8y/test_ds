#include<stdlib.h>
#include<stdio.h>
#include"bst.h"

node* init(void)
{
 node *root = NULL;
 return root;
}

void insert(node **head, int data)
{
	node *temp = NULL;
	if(!(*head)){	

		temp = malloc(sizeof(node));
		if(temp==NULL)
			exit(1);
		temp->data = data;
		temp->left=NULL;
		temp->right=NULL;
		*head = temp;
	}
	else
	{
		node *root = *head;
		if (data == (root)->data) {
			printf("Error inserting duplicate element %d\n", data);
			return;
		}
		if(data<(root)->data)
		{
			insert(&((root)->left), data);
		}
		else
		{
			insert(&((root)->right), data);
		}

	}
}

void inorder(node *root)
{
	printf("[ ");
	if(NULL==root)
		return;
	if(root->left)
		inorder(root->left);
	printf("%d", root->data);
	if(root->right)
		inorder(root->right);
	printf("]");
}
