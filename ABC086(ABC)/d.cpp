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

int n,k;
int x[10010],y[10010];
char c[10010];


int main(){
    cin>>n>>k;
    REP(i,n){
        cin>>x[i]>>y[i]>>c[i];
        if(c[i]=='W')x[i]+=k;
        x[i]%=2*k;
        y[i]%=2*k;
    }

    



    

    return 0;
}