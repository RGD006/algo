#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>

typedef struct node node_t;

typedef struct node {
  void* value;
  node_t *next;
  node_t *prev;
} node_t;

typedef struct linked_list {
  node_t *head;
  node_t *tail;
} linked_list_t;

node_t *init_node(void* value, node_t *next, node_t *prev);
linked_list_t *init_linked_list(node_t *head, node_t *tail);
void add_node_front(node_t *src, node_t *dst);
void add_node_back(node_t *src, node_t *dst);
void delete_node_from_list(linked_list_t* list, node_t *node);
void delete_node(node_t *node);
void add_node_front_list(linked_list_t* list, node_t *node);
void add_node_back_list(linked_list_t* list, node_t *node);

#endif