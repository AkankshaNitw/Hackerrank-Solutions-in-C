/*
Print in linked list in reverse
*/

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    int cnt = 0;
    struct Node* temp;
    temp = head;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }

    temp = head;

    int* reverseArray = (int*) malloc(sizeof(int)*cnt);

    for(int i = 0; i < cnt; i++){
        reverseArray[i] = temp->data;
        temp = temp->next;
    }

    for(int i = cnt-1; i>=0; i--){
        printf("%d\n", reverseArray[i]);
    }
}
