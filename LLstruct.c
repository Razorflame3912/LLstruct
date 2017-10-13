#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node *next};

void print_list(struct node *head){
  while(*head.next){
    printf(" %d ", head.i);
  }
  head = head.next;

}

struct node* insert_front(struct node *head, int new){

  return NULL;
}

struct node* free_list(struct node *head){

  return NULL;
}

int main(){

  return 0;
}
