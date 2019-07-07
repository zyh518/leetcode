#include <bits/stdc++.h>
using namespace std;


class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>kthQue;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        int len = nums.size();
        for(int i = 0; i < len; i++)
        {
            if(i < k)
            {
                kthQue.push(nums[i]);
            }else
            {
                add(nums[i]);
            }
        }

    }
    
    int add(int val) {
        if(kthQue.size() < k)
        {
            kthQue.push(val);
        }else if(val > kthQue.top())
        {
            kthQue.pop();
            kthQue.push(val);
        }
        return kthQue.empty() ? 0 : kthQue.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main()
{
    return 0;
}