
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node_s
{
    int key;
    int value;
    struct node_s* next;
};
typedef struct node_s node_t;

void init_node();
int append(int key, int value);
int append_node(node_t* node);
int delete(int key);
int delete_node(node_t* node);
int delete_all();
void dump_nodes();

#endif // LINKED_LIST_H
