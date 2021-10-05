#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"linked_list.h"


//  Create A node
Node* ll_make_node(int data){
  Node* node = calloc(1, sizeof(Node));
  node->next = NULL;
  node->data = data;
  return node;
}

//  Prepend Function
Node* ll_prepend(Node* head,int data){
  Node* newNode = ll_make_node(data);
  newNode->next = head;
  return newNode;
}


// Insert A node Function
Node* ll_insert_before(Node* head,Node* mark,int data){
  if (head == mark)
    return ll_prepend(head, data);
  
  Node* parent = NULL;
  Node* n = head;
  for (; n != NULL && n != mark; n = n->next)
    parent = n;

  if (n == mark){
    Node* newNode = ll_make_node(data);
    newNode->next = parent->next; // n 
    parent->next = newNode;
  }

  return head;
}
