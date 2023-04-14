// PROBLEM LINK --- https://leetcode.com/problems/maximum-subarray/

#include<bits/stdc++.h>
#define LL long long int 
using namespace std;

/*****************KNNC******************/

void solve(){
    int n ; cin >> n ;
    vector<int> vt1(n) ;
    for(int i=0 ; i<n ; i++) cin >> vt1[i] ;

    int sumi = 0 , maxi = INT_MIN ;
    int starti , endi ;
    
    for(int i=0 ; i<n ; i++){
        if(sumi == 0) starti = i ;
        sumi += vt1[i] ;

        if(sumi > maxi){
            maxi = sumi ;
            endi = i ;
        }

        if(sumi < 0) sumi = 0 ;
    }

    cout << starti << " " << endi << endl ;

    cout << maxi << endl ; 
}

int main(int argc,char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(0) ;
    LL testCases ; cin >> testCases ;
    while(testCases--) solve();
    return 0;  
}
