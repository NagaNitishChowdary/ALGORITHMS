// PROBLEM LINK --- https://www.codingninjas.com/studio/problems/three-pointer_1081487?leftPanelTab=0

#include <bits/stdc++.h> 

int threePointer(vector<int>& X, vector<int>& Y, vector<int>& Z)
{   
    // int mini = INT_MAX , size1 = X.size() , size2 = Y.size() , size3 = Z.size() ;
    // for(int i=0 ; i<size1 ; i++){
    //     for(int j=0 ; j<size2 ; j++){
    //         for(int k=0 ; k<size3 ; k++){
    //             mini = min(mini,max({abs(X[i]-Y[j]),abs(Y[j]-Z[k]),abs(Z[k]-X[i])})) ;
    //         }
    //     }
    // }

    // return mini ; 

    int size1 = X.size() , size2 = Y.size() , size3 = Z.size() ;
    int i=0 , j=0 , k=0 , ans = INT_MAX ; 
    while(i<size1 && j<size2 && k<size3){
        int maxVal = X[i] , minVal = X[i] ;
        if(Y[j] > maxVal) maxVal = Y[j] ;
        if(Y[j] < minVal) minVal = Y[j] ;
        if(Z[k] > maxVal) maxVal = Z[k] ;
        if(Z[k] < minVal) minVal = Z[k] ; 

        ans = min(ans,maxVal-minVal) ;
        if(X[i] == minVal) i++ ;
        else if(Y[j] == minVal) j++ ;
        else k++ ;  
    }
    return ans ;
}
