//
//  main.cpp
//  查询后的偶数和
//
//  Created by hanani on 2019/2/25.
//  Copyright © 2019 hanani. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int ArrAdd(vector<int>& a)
    {
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2==0)
                sum+=a[i];
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ret;
        for(int i=0;i<queries.size();i++)
        {
            A[queries[i][1]]+=queries[i][0];
            ret.push_back(ArrAdd(A));
        }
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
