#include<bits/stdc++.h>
using namespace std;

vector<string>splitStr(string s, char c)
{
    vector<string>ret;
    s = s + " ";
    int len = s.size();
    int start = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == c)
        {
            string tmp = s.substr(start, i - start);
            if(tmp != "")
                ret.push_back(tmp); 
                start = i + 1;
        }
    }
    return ret;
}

int main()
{
    string s;
    cin >> s;
    vector<string>ret = splitStr(s, ' ');
    string str = "";
    for(int i= 0 ; i< ret.size(); i++)
    {
        str= str + ret[i][0];
    }
    cout << str << endl;
    return 0;
}