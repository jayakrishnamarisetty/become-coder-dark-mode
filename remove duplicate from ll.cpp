Node *removeDuplicates(Node *head)
{
 // your code goes
if(head==NULL ) 
      return NULL;
  Node *temp=head;
  while(temp->next!=NULL){
      if(temp->data==temp->next->data){
          Node *q=temp->next;
          temp->next=q->next;
          //delete q;
      }else temp=temp->next;
  }
  return head;
};
