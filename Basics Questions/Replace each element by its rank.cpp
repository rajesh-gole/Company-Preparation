#include<bits/stdc++.h>
using namespace std;
void transform(int arr[], int n)
{
map<int, int> map;

//Step-1
for (int i = 0; i < n; i++){
    map[arr[i]] = i; //we are storing the index instead of freq
}
//for(auto x:map)
// cout<<x.first<<" "<<x.second<<endl;

//Step-2
int rank = 1;
for (auto i: map){
arr[i.second] = rank++; // i.second stores the index of element i
}

//Step-3
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
int main()
{
    int n=6;
    int a[]={8,15,12,6,20,1};
    transform(a,n);
}

/*  Step-1: Storing the ele,index into map
    Step-2: we store rank in a[index] i.e; a[5]=1, a[3]=2, a[0]=3 ....
    Step-3: Print array
    
*/