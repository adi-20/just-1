#ifndef LIST_H
#define LIST_H

typedef unsigned char byte;
typedef unisgned char status;

typedef struct node_sll {
  int data;
  struct node_sll *next;
} node_sll;

typedef struct sll {
  struct node_sll *head, *tail;
  unsigned int length;
} sll;

status new_sll_static(sll *list);
status new_sll_dynamic(sll **list);
status insert_sll_nth(sll *list, const int *data, const unsigned int n);
status insert_sll_begin(sll *list, const int *data);
status insert_sll_end(sll *list, const int *data);
status remove_sll_nth(sll *list, const unsigned int n);
status remove_sll_begin(sll *list);
status remove_sll_end(sll *list);
status get_sll_nth(sll *list, unisigned int *data);
status get_sll_size(sll *list, unsigned int *size, unsigned int *meta_size);
status goto_sll_nth(sll *list, node_sll **sll);
status delete_sll_dynamic(sll **list);

#endif //LIST_H
