#include<bits/stdc++.h>
using namespace std ; 

void countSort(int i,int n,vector<int> &vt1){
    vector<vector<int>> digitSort(10) ;  
    for(int j=0 ; j<n ; j++){
        digitSort[(vt1[j]/i)%10].emplace_back(vt1[j]) ; 
    }

    vector<int> output ; 
    for(int j=0 ; j<10 ; j++){
        for(auto it:digitSort[j]) output.emplace_back(it) ; 
    }

    for(int j=0 ; j<n ; j++) vt1[j] = output[j] ; 
}

void radixSort(int n,vector<int> &vt1){
    int maxi = *max_element(vt1.begin() , vt1.end()) ; 

    for(int i=1 ; (maxi/i) > 0 ; i*=10){
        countSort(i,n,vt1) ; 
    }

}

int main(){
    int test ; cin >> test ; 
    while(test--){
        int n ; cin >> n ; 
        vector<int> vt1(n) ; 
        for(auto &it:vt1) cin >> it ; 
        radixSort(n,vt1) ; 
        for(auto it:vt1) cout << it << " " ; cout << endl ; 
    }
    return 0 ; 
}
