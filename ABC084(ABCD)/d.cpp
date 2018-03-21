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

int q;
int l[100010],r[100010];

int c[100010];
int f[100010];
int n[100010];
int main(){

    cin>>q;
    REP(i,q)cin>>l[i]>>r[i];

    FOR(i,2,100001)f[i]=1;
    for(int i=2;i*i<=100000;i++){
        for(int j=i*i;j<=100000;j+=i){
            f[j]=0;
        }
    }
    for(int i=2;i<=100000;i++){
        if(f[i]&&f[(i+1)/2])n[i]=1;
    }

    REP(i,100001){
        c[i+1]=c[i]+n[i+1];
    }

    REP(i,q){
        cout<<(c[r[i]]-c[l[i]-1])<<endl;
    }

    

    

    return 0;
}