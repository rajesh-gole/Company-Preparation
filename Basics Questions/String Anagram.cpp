#include<bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2)
{
    int n1=s1.length(), n2=s2.length();
    int a1[256]={0}, a2[256]={0};
    
    for(int i=0;i<n1;i++)
    {
        a1[s1[i]-NULL]++;
    }
    for(int i=0;i<n2;i++)
    {
        a2[s2[i]-NULL]++;
    }
    for(int i=0;i<256;i++)
    {
        if(a1[i]!=a2[i])
            return 0;
    }
    return 1;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(!anagram(s1,s2))
        cout<<"No";
    else
        cout<<"Yes";
}

// First ascii code is : NULL
// 48-th ascii code is : 0
// 65-th ascii code is : A
// 97-th ascii code is : a