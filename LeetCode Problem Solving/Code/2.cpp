class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        ListNode* temp = ans;
        int rem{0};
        while(l1 != nullptr || l2 != nullptr || rem != 0){
            int sum{0};
            int l1v , l2v = 0;
            if(l1 != nullptr){
                l1v = l1 ->val;
            }else{
                l1v = 0;
            }
            if(l2 != nullptr){
                l2v = l2 ->val;
            }else{
                l2v = 0;
            }
            sum = l1v + l2v;
        
            sum += rem;
            rem = sum/10;
            
            ListNode* newNode = new ListNode(sum % 10);
            temp -> next = newNode;
            temp = temp ->next;
            if(l1 != nullptr){l1 = l1 -> next;}
            if(l2 != nullptr){l2 = l2 -> next;}
        }
        
        return ans -> next;
    }
};
