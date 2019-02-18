//
//  main.cpp
//  删除排序链表中的重复元素
//
//  Created by hanani on 2019/2/18.
//  Copyright © 2019 hanani. All rights reserved.
//

#include <iostream>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast)
        {
            while(fast&&fast->val==slow->val)
            {
                fast=fast->next;
            }
            slow->next=fast;
            slow=fast;
        }
        return head;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
