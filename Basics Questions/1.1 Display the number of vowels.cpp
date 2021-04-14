#include<bits/stdc++.h>
using namespace std;
int vowelCnt(string s)
{
    unordered_map<char,int> mp;
    vector<char> v{'a','A','e','E','i','I','o','O','u','U'};
    
    int n=s.length();
    for(int i=0;i<n;i++)
        mp[s[i]]++;
    int cnt=0;
    
    //using count
    /* for(auto it=mp.begin(); it!=mp.end();it++)
    {
        if(count(v.begin(),v.end(),it->first))
            cnt+=it->second;
    }*/
    
    //using find
    for(auto it=mp.begin(); it!=mp.end();it++)
    {
        if(find(v.begin(),v.end(),it->first)!=v.end())
            cnt+=it->second;
    }
    
    return cnt;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<vowelCnt(s);
}
