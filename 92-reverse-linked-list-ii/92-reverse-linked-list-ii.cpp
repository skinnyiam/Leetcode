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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
       
        
        
        // bakwas solution
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        reverse(ans.begin()+left-1,ans.begin()+right);
            for(auto it:ans){
                cout<<it<<" ";
            }
        ListNode* temp2=new ListNode(ans[0]);
        ListNode* dummy=temp2;
        for(int i=1;i<ans.size();i++){
            ListNode* curr= new ListNode(ans[i]);
            dummy->next=curr;
           dummy=curr;
        }
        return temp2;
    }
};