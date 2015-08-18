#include<stdio.h>
#include"linked_list.h"

int main(int argc, char **argv)
{
	node *list = init();
	node *list1 = init();
	int i=0;
	int a[20];
	for(i=0;i<20; i++)
	{
		a[i]=i+1;
		add_at_end(&list, &a[i]);
		add_at_start(&list1, &a[i]);
	}

	print_list(list);
//	print_list(list1);
	printf("\nsize of list is %d and mid element is : %d\n", size(list), *(int *)mid_element(list));
//	print_nth_element(list, 3);
	delete_nth_element(&list, 4);
	print_list(list);
	/*
 	printf("\n--deleting %d--\t", *(int *)
	delete_from_start(&list));
	print_list(list);
	printf("\n--deleting %d--\t", *(int *)
	delete_from_start(&list));
	print_list(list);
	printf("\n--deleting %d--\t", *(int *)
	delete_from_end(&list));
	print_list(list);
	printf("\n--deleting %d--\t", *(int *)
	delete_from_end(&list));
	print_list(list); */
	return 0;
}
