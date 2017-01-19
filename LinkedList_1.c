/*
Given a pointer to the head node of a linked list, print its elements in order, one element per line. If the head pointer is null (indicating the list is empty), don’t print anything.
*/

/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    if(head==NULL){
        return;
    }
    else{
        Node* temp;
        temp = head;
        while(temp!=NULL){
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        return;
    }
}
