#include<bits/stdc++.h>
using namespace std;
void ArraySort(int a[],int m)
{
        map<int, int> mp;
        for(int i=0;i<m;i++)
            mp[a[i]]++;
        
        vector<pair<int , int>> v;
        for(auto p : mp){
            int x = p.first;
            int y = p.second;
            v.push_back({y, -x}); 
        }
        
        sort(v.rbegin(), v.rend()); // sort frequency in decreasing order
        vector<int> ans;
        
        for(auto p : v){
            int x = p.first;
            int y = p.second;
            //cout << x << " " << y << endl;
            while(x-->0) // same as x--
                cout<<-y<<" ";
        }
}
int main()
{
    int a1[]={2,3,2,4,5,12,2,3,3,3,12};
    // Output : 3, 3, 3, 3, 2, 2, 2, 12, 12, 4, 5
    int m=sizeof(a1)/sizeof(a1[0]);
    ArraySort(a1,m);
}

// print the elements of an array in the decreasing frequency and if 2 numbers have same frequency then print the one which came first.

/* Step1: store the elements in map
   Step2: store the freq,ele into vector using pair
   Step3: sort freq in decreasing order
   Step4: print the ele as per their freq
   
   '-' is must else 5 come first the 4 will come
   */


