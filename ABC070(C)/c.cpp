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

ll t;
int n;
ll ans;
ll x;
// 最大公約数を求める関数
ll gcd(ll x, ll y)
{
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}

// 最大公約数を求める関数
ll lcm(ll x, ll y)
{
    

    return (x / gcd(x, y)*y);
}
int main(){

    cin>>n;

    REP(i,n){
        cin>>t;
        if(ans==0){
            ans=t;
        }else{
            ans=lcm(ans,t);
        }

    }
    cout<<ans;

    return 0;
}