/*
Compare two linked lists to check if they are equal
*/

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    if(headA == NULL && headB == NULL) //both lists empty
        return 1;
    else{
        Node* tempA;
        Node* tempB;
        tempA = headA;
        tempB = headB;
        while(tempA!= NULL && tempB!=NULL){
            if(tempA->data == tempB->data){
                tempA = tempA->next;
                tempB = tempB->next;
                continue;
            }
            else{
                return 0;
            }
        }

        if(tempA!=NULL || tempB!=NULL){
            return 0;
        }
        else{
            return 1;
        }
    }
}
