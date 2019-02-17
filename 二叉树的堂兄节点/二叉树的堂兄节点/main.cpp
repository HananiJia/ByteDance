//
//  main.cpp
//  二叉树的堂兄节点
//
//  Created by hanani on 2019/2/17.
//  Copyright © 2019 hanani. All rights reserved.
//

#include <iostream>
#include<stack>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        int lx=0;
        int ly=0;
        TreeNode* px=nullptr;
        TreeNode* py=nullptr;
        FindTreeNode(root, x, lx, &px,0,nullptr);
        FindTreeNode(root, y, ly, &py,0,nullptr);
        return (py!=px)&&(lx==ly);
    }
    void FindTreeNode(TreeNode*root,int val,int& l,TreeNode** pp,int t,TreeNode* p)
    {
        if(root)
        {
            t++;
            if(root->val==val)
            {
                *pp=p;
                l=t;
            }
            FindTreeNode(root->left, val, l, pp, t,root);
            FindTreeNode(root->right, val, l, pp, t,root);
        }
        
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
