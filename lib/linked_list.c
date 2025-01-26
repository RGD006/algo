#include "linked_list.h"
#include <stdlib.h>

linked_list_t *init_linked_list(node_t *head, node_t *tail) {
  linked_list_t *tmp = (linked_list_t *)malloc(sizeof(linked_list_t));

  tmp->head = head;
  tmp->tail = tail;

  tmp->head->next = tail;
  tmp->tail->prev = head;

  return tmp;
}

node_t *init_node(void* value, node_t *next, node_t *prev) {
  node_t *tmp = (node_t *)malloc(sizeof(tmp));

  tmp->next = next;
  tmp->prev = prev;
  tmp->value = value;

  return tmp;
}

void add_node_front(node_t *src, node_t *dst) {
  src->next = dst;
  dst->prev = src;
}

void add_node_back(node_t *src, node_t *dst) {
  src->prev = dst;
  dst->next = src;
}

void delete_node(node_t *node) {
  if (node->next && node->prev) {
    node->next->prev = node->prev;
    node->prev->next = node->next;
  } else if (node->next && !node->prev) {
    node->next->prev = NULL;
  } else {
    node->prev->next = NULL;
  }
  free(node);
}

void delete_node_from_list(linked_list_t *list, node_t *node) {
  if (list->head == node) {
    list->head = list->head->next;
    free(node);
  } else if (list->tail == node) {
    list->tail = list->tail->prev;
    free(node);
  } else {
    delete_node(node);
  }
}

void add_node_front_list(linked_list_t *list, node_t *node) {
  if (list->head == NULL && list->tail == NULL) {
    list->head = node;
    list->tail = list->head;
  } else if (list->head == list->tail) {
    list->tail = node;
    add_node_front(list->head, list->tail);
  } else {
    add_node_front(list->tail, node);
    list->tail = node;
  }
}

void add_node_back_list(linked_list_t *list, node_t *node) {
  if (list->head == NULL && list->tail == NULL) {
    list->head = node;
    list->tail = list->head;
  } else if (list->head == list->tail) {
    list->tail = list->head;
    add_node_back(list->tail, list->head);
  } else {
    add_node_back(list->head, node);
    list->head = node;
  }
}
