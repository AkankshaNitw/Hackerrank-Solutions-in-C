/*
Insert a node at a specific position in a linked list
*/

/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    struct Node* temp;
    temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        if(position == 0){
            temp->next = head;
            head = temp;
        }
        else{
            struct Node* tempPtr;
            tempPtr = head;
            while((position-1)!=0){
                tempPtr = tempPtr->next;
                position--;
            }
            temp->next = tempPtr->next;
            tempPtr->next = temp;
        }
    }
    return head;
}
