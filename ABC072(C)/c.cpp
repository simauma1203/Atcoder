//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
//----------program from here----------

int n;
int a[100010];
int m[100010];
int mx;
int ans;
int main(){
    cin>>n;
    REP(i,n){
        cin>>a[i];
        m[a[i]]++;
        mx=max(mx,a[i]);
    }

    REP(i,mx+3){
        ans=max(ans,m[i]+m[i+1]+m[i+2]);
    }
    cout<<ans;

    return 0;
}