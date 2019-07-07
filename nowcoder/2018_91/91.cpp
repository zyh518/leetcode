#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
 
 // 求n个骰子构成x点数的可能方案的个数
ll func(int n, int x)
{
    // dp[i][j]表示有i个筛子点数之和等于j的个数
    vector<vector<ll> >dp(n + 1,vector<ll>(6 * n + 1, 0));
    for(int i = 1; i <= 6; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= n; i++)
    {
        for(int j = i; j <= 6 * i; j++)
        {
            for(int k = 1; k <= 6 && j - k >= 0; k++)
            {
                dp[i][j] += dp[i - 1][j - k];
                //cout <<"dp[" << i << "][" << j << "] := " << dp[i][j] << endl;
            }
        }
    }
    ll ret = 0;
    for(int j = x; j <= 6 * n; j++)
    {
        ret += dp[n][j];
        
    }
    return ret;
}
 
ll gcd(ll a, ll b)
{
    if(a > b)
        return gcd(b,a);
    if(a == 0)
        return b;
    return gcd(b % a, a);
}
 
void huajian(ll a, ll b)
{
   // cout << a << " " << b << endl;
    ll tmp = gcd(a, b);
    cout << (a / tmp) <<"/" << (b / tmp) << endl;
    return ;
}
 
int main()
{
    std::ios::sync_with_stdio(false);
    int n, x;
    cout << "test" << endl;
    cin >> n >> x;
   
    if(n >= x)
        cout << 1 << endl;
    else if(6 * n < x)
        cout << 0 << endl;
    else
    {
        huajian(func(n, x), pow(6, n));
    }
    return 0;
}
