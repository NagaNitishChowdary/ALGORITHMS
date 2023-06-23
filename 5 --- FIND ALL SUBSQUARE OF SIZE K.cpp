// PROBLEM LINK --- https://www.codingninjas.com/studio/problems/print-all-kxk_893291?leftPanelTab=0

#include <bits/stdc++.h> 
vector<vector<int>> sumOfKxKMatrices(vector<vector<int>> &arr, int k){
    int size = arr.size() ; 
    vector<vector<int>> ans(size-k+1,vector<int> (size-k+1,0)) ;
    vector<vector<int>> prefixSum2D(size+1,vector<int> (size+1,0)) ;
    for(int i=1 ; i<=size ; i++){
        for(int j=1 ; j<=size ; j++){

            prefixSum2D[i][j] = arr[i-1][j-1] + prefixSum2D[i][j-1] ;

        }
    }  

    for(int i=1 ; i<=size-k+1 ; i++){
        for(int j=k ; j<=size ; j++){
            
            for(int h=i ; h<i+k ; h++){
                ans[i-1][j-k] += (prefixSum2D[h][j] - prefixSum2D[h][j-k]) ;
            }

        }
    }

    return ans ; 
}
