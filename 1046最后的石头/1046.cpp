#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        // 将石头重量压栈
        for(int i = 0; i < stones.size(); i++)
        {
            q.push(stones[i]);
        }
        // 从大顶堆中不断的取石头
        while(q.size() > 1)
        {
            int num1 = q.top();
            q.pop();
            int num2 = q.top();
            q.pop();
            if(num1 != num2)
                q.push(num1 - num2);

        }
        return q.empty() ? 0 : q.top();
    }
};

int main()
{
    return 0;
    
}