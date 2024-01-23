/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node*temp=head;
           int l=0;
           int c=0;
           while(temp!=NULL){
               temp=temp->next;
               l++;
           }
           temp=head;
           while(temp!=NULL){
               if(c==(l-n)){
                   return temp->data;
               }
               temp=temp->next;
               c++;
           }
           return -1;
    }
};
