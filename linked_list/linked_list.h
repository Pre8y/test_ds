#ifndef linked_list_h
#define linked_list_h

typedef struct node {
	void *data;
	struct node *next;
} node;


node* init(void);
void add_at_start(node **, void *);
void add_at_end(node **, void *);
void print_list(node *);
void delete_nth_node(node **, int n);


#endif
