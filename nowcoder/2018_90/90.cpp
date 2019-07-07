#include <bits/stdc++.h>
using namespace std;

vector<int> distance(int num1, int num2, int s)
{
    vector<int> ret(2,0);
    if((abs(num1 - num2) % s ) & 1)
    {
        ret[0] = abs(num1 - num2) % s;
        ret[1] = s - ret[0];
    }else
    {
        ret[1] = abs(num1 - num2) % s;
        ret[0] = s - ret[1];
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    int n, S;
    cout << "start" << endl;
    cin >> n >> S;
    vector<int>nums(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ret1 = 0;
    int ret2 = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            ret1 = max(ret1, distance(nums[i], nums[j], S * 2)[0]);
            ret2 = max(ret2, distance(nums[i], nums[j], S * 2)[1]);
        }
    }
    cout << min(ret1, ret2) << endl;
    return 0;
}