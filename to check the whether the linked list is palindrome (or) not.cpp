V
class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node *reverse(Node *head)
    {
        Node *current=head;
        Node *prev=NULL;
        while(current!=NULL){
            Node *next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *rev=reverse(slow->next);
        Node *current=head;
        while(rev!=NULL){
            if(current->data!=rev->data) return false;
            rev=rev->next;
            current=current->next;
        }
        return true;
    }
};
