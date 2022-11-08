// KADANE'S ALGORITHM 
// MAXIMUM SUBARRAY SUM  

#include<bits/stdc++.h>

#define LL long long int 
#define EB emplace_back
#define PB pop_back
#define F first
#define S second
#define MP make_pair
#define NEXT "\n"
#define LOOP(i,a,b) for(int i=a;i<b;i++) 

using namespace std;

/*****************KNNC******************/

void ON1TIMECOMPLEXITY(){
    LL n;
    cin>>n;
    LL arr[n];
    LOOP(i,0,n) cin>>arr[i];
    LL ans=0,sum=0;
    for(int i=0;i<n;i++){
        sum=max(arr[i],sum+arr[i]);
        ans=max(ans,sum);
    }
    cout<<ans<<NEXT;
}

void ON2TIMECOMPLEXITY(){
    LL n;
    cin>>n;
    LL arr[n];
    LOOP(i,0,n) cin>>arr[i];
    LL ans=0;
    for(LL i=0;i<n;i++){
        LL sum=0;
        for(LL j=i;j<n;j++){
            sum+=arr[j];
            ans=max(sum,ans);
        }
    }
    cout<<ans<<NEXT;
}

void ON3TIMECOMPLEXITY(){
    LL n;
    cin>>n;
    LL arr[n];
    LOOP(i,0,n) cin>>arr[i];
    LL ans=0;
    for(LL i=0;i<n;i++){
        for(LL j=i;j<n;j++){
            LL sum=0;
            for(LL k=i;k<=j;k++){
                sum+=arr[k];
            }
            ans=max(sum,ans);
        }
    }
    cout<<ans<<NEXT;
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    //LL testCases;
    //cin>>testCases;
    //while(testCases--) solve();
    ON1TIMECOMPLEXITY();
    //ON2TIMECOMPLEXITY();
    //ON3TIMECOMPLEXITY();


    #ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;  
}
