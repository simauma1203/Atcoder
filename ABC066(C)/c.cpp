//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;



int main(){
    int n;
    ll a[200400];
    cin>>n;
    REP(i,n)cin>>a[i];
    ll b[200400];
    int hn=n/2;
    if(n%2==0){
        REP(i,n){
            if(i%2==1)b[hn-(i+1)/2]=a[i];
            if(i%2==0)b[hn+i/2]=a[i];
        }
    }
    else{
        REP(i,n){
            if(i%2==1)b[hn+(i+1)/2]=a[i];
            if(i%2==0)b[hn-i/2]=a[i];
        }
    }
    REP(i,n)cout<<b[i]<<" ";
    //else REP(i,n)cout<<b[n-i]<<" ";
    
    

    return 0;
}