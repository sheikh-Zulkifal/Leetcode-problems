/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*>myset;
        while(head){
            if(myset.count(head)) return true;
            myset.insert(head);
            head=head->next;
        }
        return false;
    }
};