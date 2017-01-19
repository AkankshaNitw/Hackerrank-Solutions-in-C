/*
Reverse a linked list
*/

/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if (head==NULL){  //Empty list
        return NULL;
    }
    else if (head->next == NULL){ //Only one element in list
        return head;
    }
    else{
        struct Node* temp1;
        struct Node* temp2;
        struct Node* temp3;
        temp1 = head;
        temp2 = head->next;
        temp3 = head->next->next;
        temp1->next = NULL;
        temp2->next = temp1;
        while(temp3!=NULL){
            temp1 = temp2;
            temp2 = temp3;
            temp3 = temp3->next;
            temp2->next = temp1;
        }
        head = temp2;
        return head;
    }
}
