/*
Given a pointer to the tail of a linked list and a position count backwards from the tail node of the linked list, get the value of the node at the given position.
*/

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    int cnt = 0;
    struct Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }
    int pos = cnt-positionFromTail;

    temp = head;
    while(pos!=1){
        temp = temp->next;
        pos--;
    }
    return temp->data;
}
