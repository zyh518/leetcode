#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;
    vector<int>nums(n, 0);
    int maxNum = INT_MIN, secondNum = INT_MIN;
    for(int i = 0; i< n; i++)
    {
        cin >> nums[i];
        if(nums[i] >= maxNum)
        {
            secondNum = maxNum;
            maxNum = nums[i];
            
        }else if(nums[i] > secondNum)
        {
            secondNum = nums[i];
        }
    }
    cout << secondNum <<endl;
    return 0;
}