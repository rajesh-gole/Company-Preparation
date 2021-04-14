#include<bits/stdc++.h>
using namespace std;
int oddFreq(int a[],int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[a[i]]++;
    int sum=0;
    for(auto i:mp)
    {
        if(i.second%2)
        {
            sum+=(i.first)*(i.second);
       /* while(i.second--)
            sum+=i.first;*/
        }
    }
    return sum;
}
int main()
{
    int a[]={1, 2, 4, 5, 6, 3, 1, 2, 3, 3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<oddFreq(a,n);
}
