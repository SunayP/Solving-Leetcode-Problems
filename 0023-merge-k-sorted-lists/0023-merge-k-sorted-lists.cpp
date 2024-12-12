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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){return NULL;}
        priority_queue<int> pq;
        int n = 0;
        for(int i=0; i<lists.size(); i++){
            if(lists[i] == NULL){
                n++;
                continue;
            }
            ListNode* temp = lists[i];
            while(temp){
                pq.push(temp->val);
                temp = temp->next; 
            }
        }
        if(n == lists.size()){
            return NULL;
        }
        vector<int> v;
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        int m= v.size();
        ListNode* merge = new ListNode(v[m-1]);
        ListNode* temp = merge;
        for(int i = m-2; i>=0; i--){
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        return merge;
    }
};