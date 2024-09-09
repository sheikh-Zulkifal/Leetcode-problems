/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // Custom comparison function for the priority_queue (min-heap)
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;  // We want the smallest value at the top
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Edge case: if there are no lists
        if (lists.empty()) {
            return nullptr;
        }

        // Min-heap (priority queue) to store nodes by their value
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;

        // Step 1: Add the head (first node) of each list to the heap
        for (auto list : lists) {
            if (list != nullptr) {  // Only add non-empty lists
                minHeap.push(list);
            }
        }

        // Create a dummy node to help build the merged list
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;  // This will point to the last node in the merged list

        // Step 2: Process the heap until it is empty
        while (!minHeap.empty()) {
            // Get the smallest node from the heap
            ListNode* smallest = minHeap.top();
            minHeap.pop();  // Remove the smallest node from the heap

            // Add the smallest node to the merged list
            tail->next = smallest;  // Append it to the merged list
            tail = tail->next;  // Move the tail pointer forward

            // If the smallest node has a next node, add it to the heap
            if (smallest->next != nullptr) {
                minHeap.push(smallest->next);
            }
        }

        // Return the merged list (skipping the dummy node)
        return dummy->next;
    }
};
