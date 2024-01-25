if (!head) {
        return;
    }

    Node* slow = head;
    Node* fast = head;
    int f = 0;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow) {
            f = 1;
            break;
        }
    }

    if (!fast || !fast->next) {
        return;
    }

    slow = head;

    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }

    while (slow != fast->next) {
        fast = fast->next;
    }

    fast->next = nullptr;
}
