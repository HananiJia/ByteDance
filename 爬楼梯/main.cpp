//
//  main.cpp
//  x的平方根
//
//  Created by hanani on 2019/2/15.
//  Copyright © 2019 hanani. All rights reserved.
//

#include <iostream>
using namespace std;

//class Solution {
//public:
//    int climbStairs(int n) {
//        if(n==1)
//            return 1;
//        if(n==2)
//            return 2;
//        return climbStairs(n-1)+climbStairs(n-2);
//    }
//};

class Solution {
public:
    int climbStairs(int n) {
         if(n==1)
             return 1;
        if(n==2)
            return 2;
        int first=1;
        int second=2;
        int ret=0;
        int i=3;
        while(i<=n)
        {
            ret=first+second;
            first=second;
            second=ret;
            i++;
        }
        return ret;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    Solution A;
    cout<<A.climbStairs(10);
    std::cout << "Hello, World!\n";
    return 0;
}
