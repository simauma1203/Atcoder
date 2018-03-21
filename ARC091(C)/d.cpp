//#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<string>
#include<queue>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;



int main(){

    ll n,k;
    cin>>n>>k;
    //(a,b)
    //a,b < n
    //k <= a%b

    //a<=k
    
    if(k==0){
        cout<<n*n;
        return 0;
    }
    ll a,b;
    int cnt=0;
    for(b=1;b<=n;b++){
        int p,q;
        p=floor(n/b);
        q=n%b;
        cnt+=max(0,(int)(b-k))*p+max(0,(int)(q-k+1));
    }
    
    if(k==0){
        cnt-=n;
    }
    cout<<cnt;
    return 0;
}