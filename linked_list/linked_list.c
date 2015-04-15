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
	node *temp = (node*)malloc(sizeof(node*));
	if(NULL==temp)
		exit(1);
	temp->data = data;
	temp->next=*head;
	*head = temp;
}

void add_at_end(node **head, void *data)
{
	node *temp = (node*)malloc(sizeof(node*));
	if(NULL==temp)
		exit(1);
	temp->data = data;
	temp->next=NULL;


	if(*head==NULL)
	{
		*head = temp;
	}
	else{

		node *current = *head;
		while(current->next!=NULL)
		{
		current = current->next;		
		}
		current->next = temp;
	}
}

void print_list(node *head)
{
	printf("your list is here\n");

	while(head!=NULL)
	{
		printf("%d\t", *(int *)head->data);
		head = head->next;
	}
	printf("\n----\n\n");
}
void delete_nth_node(node **head, int n)
{
	node *temp = *head;
	int count = 0;
	while(temp!=NULL)
	{
		count++;
		if((count)%n==0)
		{
			node *del = temp->next;
		        temp->next = del->next;
	       		del->data = NULL;
	 		free(del);		
		}
		temp=temp->next;
	}

}


