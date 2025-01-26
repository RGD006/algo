#ifndef HASHSET_H
#define HASHSET_H

#include <linked_list.h>
#include <stdint.h>

typedef struct _hashed_node {
  int16_t bucket;
  void* value;
} hashed_node_t;

typedef struct _set_hash {
  linked_list_t list;
  size_t size;
  size_t 
} set_hash_t;

#endif