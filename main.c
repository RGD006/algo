#include <stdio.h>
#include <linked_list.h>
#include <stdlib.h>

int main() {
  linked_list_t *list = malloc(sizeof(linked_list_t));
  node_t *node_1 = init_node((void*)1, NULL, NULL);
  node_t *node_2 = init_node((void*)2, NULL, NULL);
  node_t *node_3 = init_node((void*)3, NULL, NULL);
  node_t *node_4 = init_node((void*)4, NULL, NULL);
  node_t *node_5 = init_node((void*)5, NULL, NULL);

  add_node_front_list(list, node_1);
  add_node_front_list(list, node_2);
  add_node_front_list(list, node_3);
  add_node_front_list(list, node_4);
  add_node_front_list(list, node_5);

  for (node_t *step = list->head; step != NULL; step = step->next) {
    printf("%d -> ", (int32_t*)step->value);
  }

  printf("\n");

  delete_node_from_list(list, node_1);

  for (node_t *step = list->head; step != NULL; step = step->next) {
    printf("%d -> ", (int32_t*)step->value);
  }

  printf("\n");

  delete_node_from_list(list, node_3);

  for (node_t *step = list->head; step != NULL; step = step->next) {
    printf("%d -> ", (int32_t*)step->value);
  }

  printf("\n");
  
  free(list);

  return 0;
}