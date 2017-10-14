#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node *next;};
struct node *HEAD = NULL;

void print_list(struct node *head){
  while(head){
    printf(" %d ->", (*head).i);
    head = (*head).next;
  }
  printf("\n");
}

struct node* insert_front(struct node *head, int new){
  struct node *new_node = (struct node*)malloc(sizeof(struct node));
  (*new_node).i = new;
  (*new_node).next = head;
  HEAD = new_node;
  return new_node;
}

struct node* free_list(struct node *head){
  while(head){
    struct node *tmp = head;
    head = (*head).next;
    free(tmp);
  }
  return NULL;
}

int main(){
  int i = 8;
  insert_front(HEAD, 1000);
  for(i;i > 0; i--){
    insert_front(HEAD, i);
  }
  insert_front(HEAD, 999);
  print_list(HEAD);
  free_list(HEAD);
  //Test call of print_list to show free_list worked.
  //print_list(HEAD);
  return 0;
}
