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

int m,n;

int main(){
    cin>>n>>m;
    int ans=0;
    int a=pow(2,m);
    ans+=((n-m)*100+1900*m)*a;

    cout<<ans<<endl;

    return 0;
}