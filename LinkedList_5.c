/*
Delete a node at given position
*/

/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0){
        if(head->next == NULL){
            free(head);
            return NULL;
        }
        else{
            struct Node* temp;
            temp = head;
            head = head->next;
            free(temp);
        }
    }
    else{
        struct Node* temp;
        struct Node* tempPtr;
        temp = head;
        while((position-1)!=0){
            temp = temp->next;
            position--;
        }
        tempPtr = temp->next;
        temp->next = tempPtr->next;
        free(tempPtr);
    }

    return head;

}
