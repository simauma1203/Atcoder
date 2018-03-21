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

int n;
ll a[200400];
ll x;
ll c;
ll ans=1000000000000000000LL;
int main(){
    cin>>n;
    REP(i,n){
        cin>>a[i];
        x+=a[i];
    }
    REP(i,n-1){
        c+=a[i];
        ans=min(ans,abs(x-2*c));
    }
    cout<<ans;

    
    

    return 0;
}