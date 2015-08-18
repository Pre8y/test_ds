#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node{
	void *data;
	struct node *next;
}node;

node* init(void);
void add_at_start(node **, void*);
void add_at_end(node **, void*);
void print_list(node *);
void* delete_from_end(node **);
void* delete_from_start(node **);
int size(node *);
void* mid_element(node *);
void print_nth_element(node *, int n);
void delete_nth_element(node **, int n);

#endif
