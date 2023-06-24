#include<bits/stdc++.h>
using namespace std;

// N M 
// FOLLOWED BY M QUERIES
// L R VAL 
// INCREASE RANGE FROM L TO R TO VAL 
// (OR) XOR RANGE FROM L TO R WITH VAL 


// 7 3
// 0 2 5 
// 1 3 6
// 2 6 1

void solve(){
    int n,m ; cin >> n >> m ; 
    vector<int> vt1(n,0) ; 
    for(int i=0 ; i<m ; i++){
        int l,r,val ; cin >> l >> r >> val ; 
        vt1[l] += val ;
        if(r+1 != n) vt1[r+1] -= val ; 
    }
    for(int i=1 ; i<n ; i++) vt1[i] += vt1[i-1] ; 
    cout << vt1 ; 
}

int main() {
    fastio() ; 
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr) ;
    #endif
    ll test ; cin >> test ;
    while(test--) solve();
    return 0;  
} 
