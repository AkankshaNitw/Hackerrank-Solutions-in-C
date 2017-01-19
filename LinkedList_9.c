/*
Merge two sorted linked lists
*/

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    if(headA == NULL && headB == NULL){
        return NULL;
    }
    else if (headA==NULL && headB!=NULL){
        return headB;
    }
    else if (headA!=NULL && headB==NULL){
        return headA;
    }
    else{
        struct Node* tempA = headA;
        struct Node* tempB = headB;
        struct Node* temp;
        struct Node* head;
        if(tempA->data <= tempB->data)
            head = headA;
        else
            head = headB;
        while(tempA!=NULL && tempB!=NULL){
            if(tempA->data <= tempB->data){
                if((tempA->next != NULL) && (tempA->next->data <= tempB->data)){
                    tempA = tempA->next;
                }
                else{
                    temp = tempA->next;
                    tempA->next = tempB;
                    tempA = temp;
                }
            }
            else if(tempB->data < tempA->data){
                if((tempB->next != NULL) && (tempB->next->data < tempA->data)){
                    tempB = tempB->next;
                }
                else{
                    temp = tempB->next;
                    tempB->next = tempA;
                    tempB = temp;
                }
            }
        }
        return head;
    }

}
