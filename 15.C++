//15.Add 1 to a Linked List Number//
class Solution {
public:
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    Node* addOne(Node* head) {
        head = reverseList(head);

        Node* current = head;
        int carry = 1;

        while (current != nullptr) {
            int sum = current->data + carry;
            carry = sum / 10;
            current->data = sum % 10;
            if (carry == 0) break;
            if (current->next == nullptr && carry != 0) {
                current->next = new Node(carry);
                carry = 0;
            }
            current = current->next;
        }

        head = reverseList(head);

        return head;
    }
};