/*
Insert a Node at the Tail of a Linked List
*/

/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node * temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
  // Complete this method
    if(head==NULL){
        head = temp;
    }
    else
        {
        Node* tempMove = head;
        while(tempMove->next!=NULL){
            tempMove = tempMove->next;
        }
        tempMove->next = temp;
    }
    return head;
}
