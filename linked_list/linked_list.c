#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

node* init(void)
{
	node *head = NULL;
	return head;
}

void add_at_start(node **head, void *data)
{
	node *temp = (node*)malloc(sizeof(node));
	if(NULL==temp)
		exit(1);
	temp->data = data;
	temp->next = *head;
	*head = temp;
}

void add_at_end(node **head, void *data)
{
	node *temp = (node*)malloc(sizeof(node));
	if(NULL==temp)
		exit(1);
	temp->data = data;
	temp->next =NULL;

	if(NULL==*head)
	{
		*head = temp;
	}
	else{
		node *t = *head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next = temp;
	}
}

void print_list(node *head)
{
	printf("\n---printing list----\n");
	if(head==NULL)
		printf("\n----empty list----\n");
	else{
		while(head!=NULL)
		{
			printf(" %d\t", *(int*)head->data);
			head = head->next;
		}
		printf("\n---------printing finish------\n");
	}
}

void* delete_from_start(node **head)
{
	node *del = *head;
	*head = del->next;
	void *data = del->data;
	free(del);
	return data;
}

void* delete_from_end(node **head)
{
	
	node *temp  = *head;
	if(NULL==temp)
	{
		printf("\nnothing to delete\n");
		exit(1);
	}
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	node *del=temp->next;
	void *data = del->data;
	temp->next=NULL;
	free(del);
	return data;

}
int size(node *head)
{
	int count = 0;
	if(NULL==head)
		return count;
	while(head!=NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

void* mid_element(node *head)
{
	node *temp1, *temp2;
	if(NULL==head)
		return NULL;
	temp1 =temp2 = head;
	int count=0;

	while(temp1->next!=NULL)
	{
		count++;
		temp1=temp1->next;
		if(count%2==0)
			temp2=temp2->next;
	}
	return temp2->data;

}

void print_nth_element(node *head, int n)
{
	if(NULL==head)
	{
		printf("\nempty list\n");
	}
	else
	{
		int count=0;
		printf("\n %dth elements are= \t", n);
		while(head!=NULL)
		{
			count++;
			if(count%n==0)
				printf("%d\t", *(int *)head->data);

			head = head->next;
		}
	}
}

void delete_nth_element(node **root, int n)
{
	node *head = *root;
	node *prev =  malloc(sizeof(node));
	int a = -1;
	prev->data=&a;
	prev->next = head;
	int length = size(head);
	if(NULL==head)
	{
		printf("\nempty list\n");
	}
	else
	{
		int count=0;
		int del_count = 0;
		while(head!=NULL)
		{
			count++;
			if(count%n==0)
			{
			//	printf(" prev %d\t", *(int *)prev->data);
			//	printf(" head %d\t", *(int *)head->data);
			//	printf("\n");
				node *del = head;
				prev->next = head->next;
				free(del);
				del =NULL;
				del_count++;

			}
			else
			{
				prev = head;
			}
			head = head->next;
		}
		printf("\n---delete count %d and size %d---\n", del_count, length);
		if(del_count==length)
		{
			//free(root);
			*root=NULL;
		}
	}
}
