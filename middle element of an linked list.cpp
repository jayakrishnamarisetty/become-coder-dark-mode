class Solution {
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head) {
        if (head == NULL) {
            return -1; 
        }

        int rug = 0;
        Node *temp = head;
        
        while (head != NULL) {
            if (rug % 2 == 1) {
                temp = temp->next;
            }
            rug = rug + 1;
            head = head->next;
        }

        return temp->data; 
    }
};
