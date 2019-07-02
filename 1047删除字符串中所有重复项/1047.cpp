#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char>mySta;
        int len = S.size();
        for(int i = 0; i < len; i++)
        {
            if(!mySta.empty() && mySta.top() == S[i])
            {
                mySta.pop();
            }else
            {
                mySta.push(S[i]);
            }
        }
        string ret;
        while(!mySta.empty())
        {
            ret = to_string(mySta.top()) + ret;
            mySta.pop();
        }
        return ret;
    }
};

int main()
{
    return 0;
}