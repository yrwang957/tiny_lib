
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "linked_list.h"

node_t* head = NULL;

void init_node()
{
    head = NULL;
}

int append(int key, int value)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if(new_node == NULL)
        return -1;

    new_node->key = key;
    new_node->value = value;
    new_node->next = NULL;

    append_node(new_node);
    free(new_node);

    return 0;
}

int append_node(node_t* node)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if(new_node == NULL)
        return -1;

    new_node->key = node->key;
    new_node->value = node->value;
    new_node->next = NULL;

    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        node_t* current = head;

        while(current && current->next)
            current = current->next;

        current->next = new_node;
    }

    return 0;
}

int delete(int key)
{
    int successed = false;
    node_t* prev = NULL;
    node_t* current = head;

    while(current)
    {
        if(current->key == key)
        {
            node_t* next = current->next;

            if(current == head)
                head = next;
            else
                prev->next = next;

            free(current);
            current = next;
            successed = true;

            continue;
        }

        prev = current;
        current = current->next;
    }

    return successed ? 0 : -1;
}

int delete_node(node_t* node)
{
    return delete(node->key);
}

int delete_all()
{
    node_t* current = head;

    while(current)
    {
        node_t* next = current->next;
        free(current);
        current = next;
    }
    head = NULL;

    return 0;
}

void dump_nodes()
{
    int first_node = true;

    if(head == NULL)
    {
        printf("(NULL)\n");
        return;
    }

    node_t* current = head;
    while(current)
    {
        if(first_node)
        {
            first_node = false;
        }
        else
        {
            printf(" -> ");
        }
        printf("(%d,%d)", current->key, current->value);

        current = current->next;
    }
    printf("\n");
}
