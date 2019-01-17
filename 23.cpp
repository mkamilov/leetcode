/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Comparator {
public:
    bool operator()(const ListNode* a, const ListNode* b)
    {
        return (a->val > b->val);
    }
};
class Solution {

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Comparator> pq;
        for (int i =0; i < lists.size(); ++i) {
            ListNode* n = lists[i];
            while(n != NULL) {
                pq.push(n);
                n = n->next;
            }
        }
        ListNode root(0);
        ListNode* node = NULL;
        ListNode* prev = &root;
        while(pq.empty() == false) {
            node = pq.top();
            node->next = NULL;
            //cout << node->val <<endl;
            pq.pop();
            prev->next = node;
            prev = node;
        }
        //node->next = NULL;
        return root.next;
    }
};
