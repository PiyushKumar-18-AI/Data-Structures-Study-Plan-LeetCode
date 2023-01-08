## 141. Linked List Cycle

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *slow = head, *fast = head->next;
        //if there is a cycle, fast will eventually catch up slow
        while(slow != fast){
            if(fast == NULL || fast->next == NULL)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
