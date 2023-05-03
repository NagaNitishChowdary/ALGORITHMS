//PRINTING SUBSETS USING BIT MANIPULATION
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

void solve(int arr[],int n){
    for(ll num=0;num<=(1<<n)-1;num++){
        vector<int>ds;
        for(ll bit=0;bit<n;bit++){
            if(num&(1<<bit)) ds.eb(arr[bit]);
        }
        for(auto it:ds) cout<<it<<" ";
        cout<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
}
 
