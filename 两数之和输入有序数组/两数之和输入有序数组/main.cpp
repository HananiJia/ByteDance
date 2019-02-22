//
//  main.cpp
//  两数之和输入有序数组
//
//  Created by hanani on 2019/2/21.
//  Copyright © 2019 hanani. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        int index1=0;
        int index2=numbers.size()-1;
        int sum=numbers[index1]+numbers[index2];
        while(index1<index2)
        {
            sum=numbers[index1]+numbers[index2];
            if(sum==target)
            {
                ret.push_back(index1+1);
                ret.push_back(index2+1);
            }
            else
            {
                if(sum>target)
                {
                    index2--;
                }
                else
                {
                    index1++;
                }
            }
        }
        return ret;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
