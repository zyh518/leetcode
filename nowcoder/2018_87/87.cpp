#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;// 数据个数
    vector<int>nums(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int offset, maxCount;// 当前页数
    cin >> offset;
    cin >> maxCount;
    int i = maxCount * (offset);
    if(i >= n)
    {
        cout << "超过分页范围"  << endl;
    }


    for(; i < maxCount * (offset + 1) && i < n; i++)
    {
        cout << nums[i] << endl;
    }
    
    return 0;
}