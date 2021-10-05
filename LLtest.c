#include <stdio.h>
#include <assert.h>
#include "linked_list.h"




int main(void){
  Node *v = NULL; //Creating a pointer
  for(int i = 0; i < 10; i++){
    v = ll_prepend(v, i);
  }

//   Printing The list
  ll_print(v);

//   Assertion here

  assert(ll_find(v, 11) == NULL);

  Node* value_5 = ll_find(v, 5);
  ll_insert_before(v, value_5, 11);
  ll_print(v);
  ll_insert_before(v, value_5, 12);
  ll_print(v);
  return 0;
}
