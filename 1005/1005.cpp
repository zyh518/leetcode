#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end());
        // 绝对值最小的负数
        int minVal = INT_MAX;
        int ret = 0;
        // 如果有大于k个负数
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] < 0 && K > 0)
            {
                K--;
                ret -= A[i];
            }else
            {
                ret += A[i];
            }
            minVal = min(minVal, abs(A[i]));
            
        }
        if(K & 1)
        {
            ret -= 2 * minVal;
        }
        return ret;
        
    }
};


int main()
{
    return 0;
    
}