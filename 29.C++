//29.Find length of Loop//
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        if (head == nullptr) 
            return 0;

        Node *slow = head;
        Node *fast = head;
    
        // Phase 1: Detect loop using Floyd’s Cycle Detection Algorithm
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
    
            if (slow == fast) { // Loop detected
                // Phase 2: Count nodes in the loop
                int count = 1;
                Node *temp = slow->next;
                while (temp != slow) {
                    count++;
                    temp = temp->next;
                }
                return count;
            }
        }
    
        return 0;
    }
};