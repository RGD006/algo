#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>
#include <stdlib.h>

typedef struct node node_t;

typedef struct node 
{
    int32_t value;
    node_t* next;
    node_t* prev;
} node_t;

typedef struct linked_list 
{
    node_t* head; 
    node_t* tail;
} linked_list_t;

node_t* init_node(const int32_t value, node_t* next, node_t* prev)
{
    node_t* tmp = malloc(sizeof(tmp));

    tmp->next = next;
    tmp->prev = prev;
    tmp->value = value;

    return tmp;
}

void free_node(node_t* node)
{
    free(node->next);
    free(node->prev);
    free(node);
}

linked_list_t* init_linked_list(node_t* head, node_t* tail) 
{
    linked_list_t* tmp = malloc(sizeof(linked_list_t));

    tmp->head = head;
    tmp->tail = tail;

    tmp->head->next = tail;
    tmp->tail->prev = head;

    return tmp;
}

void free_linked_list(linked_list_t* linked_list)
{
    free(linked_list->head);
    free(linked_list->tail);
    free(linked_list); 
}

#endif