#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* nodeA = head;

        while (nodeA != NULL && nodeA->next != NULL) {
            ListNode* nodeB = nodeA->next;

            while (nodeB != NULL && nodeB->val == nodeA->val) {
                nodeB = nodeB->next;
            }

            nodeA->next = nodeB;
            nodeA = nodeA->next;
        }

        return head;
    }
};

// Print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Create linked list from vector
ListNode* createList(vector<int> arr) {
    if (arr.size() == 0) return NULL;

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5};

    ListNode* head = createList(arr);

    cout << "Original List: ";
    printList(head);

    Solution s;
    head = s.deleteDuplicates(head);

    cout << "After removing duplicates: ";
    printList(head);

    return 0;
}
