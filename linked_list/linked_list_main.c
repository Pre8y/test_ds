#include<stdio.h>
#include"linked_list.h"


int main(int argc, char **argv)
{
	node *list = init();
	node *list1 = init();
	int i;
	int a[20];
	for(i=0; i<20;i++)
	{
		a[i] = i+1;
		add_at_start(&list, &a[i]);
		add_at_end(&list1, &a[i]);
	}
	print_list(list);
	print_list(list1);
	delete_nth_node(&list1, 3);
	print_list(list1);	
	return 0;
}
