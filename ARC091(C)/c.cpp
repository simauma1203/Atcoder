//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;



int main(){
    ll n,m;
    cin>>n>>m;
    //kado 4 hen 6 hoka 9
    if(n>m)swap(n,m);
    if(n>1 && m>1)cout<<(n-2)*(m-2);
    else if(n==1&&m==1)cout<<1;
    else cout<<(m-2);
    

    return 0;
}