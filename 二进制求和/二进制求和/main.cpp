//
//  main.cpp
//  二进制求和
//
//  Created by hanani on 2019/2/15.
//  Copyright © 2019 hanani. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

//class Solution {
//public:
//    string addBinary(string a, string b) {
//        int num1=0;
//        int num2=0;
//        int t=1;
//        for(int i=a.size()-1;i>=0;i--)
//        {
//            num1+=(a[i]-'0')*t;
//            t*=2;
//        }
//        t=1;
//        for(int i=b.size()-1;i>=0;i--)
//        {
//            num2+=(b[i]-'0')*t;
//            t*=2;
//        }
//        num1+=num2;
//        string ret;
//        while(num1>=2)
//        {
//            ret+=(num1%2)+'0';
//            num1/=2;
//        }
//        ret+=(num1%2)+'0';
//        ret.reserve();
//        return ret;
//    }
//};

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()>=b.size())
        {
            return addbinary(a, b);
        }
        else{
            return addbinary(b, a);
        }
    }
    string addbinary(string longs,string shorts)
    {
        int carry=0;
        int sizes=shorts.size()-1;
        int sizel=longs.size()-1;
        while(sizes>=0)
        {
            int num=(longs[sizel]-'0')+(shorts[sizes]-'0')+carry;
            if(num>=2)
            {
                longs[sizel]=num-2+'0';
                carry=1;
            }
            else
            {
                longs[sizel]=num+'0';
                carry=0;
            }
            sizel--;
            sizes--;
        }
        while(sizel>=0&&carry!=0)
        {
            int num=longs[sizel]-'0'+carry;
            if(num>=2)
            {
                longs[sizel]=num-2+'0';
                carry=1;
            }
            else
            {
                longs[sizel]=num+'0';
                carry=0;
            }
            sizel--;
        }
        if(sizel<0&&carry!=0)
        {
            longs='1'+longs;
        }
        return longs;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution A;
    string a="0";
    string b="0";
    cout<<A.addBinary(a, b)<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}
