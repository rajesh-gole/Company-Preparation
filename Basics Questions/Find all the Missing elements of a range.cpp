#include<bits/stdc++.h>
using namespace std;
void missingEle(int n, int a[], int l,int h)
{
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[a[i]]++;      // To insert element into map/ unordered_map
        //mp.insert(a[i]);  // To insert element into set/ unordered_set
        
    for(int i=l;i<=h;i++)
    {
        if(mp.find(i)==mp.end())
            cout<<i<<" ";
    }
}
int main()
{
    int n;cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l,h;cin>>l>>h;
    missingEle(n,a,l,h);
}

/*
Example1:
n=5
arr[] = [1, 3, 5, 7, 8, 9]
low=1 high = 10

o/p : 2, 4, 6, 10

Example2:
5
1 2 3 8 9
1 5

o/p: 4 5 


*/