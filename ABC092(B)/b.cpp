//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cmath>
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

//NoSub

int main(){//ていしゅつしないで！！！！！！！！！！！！
    int n,d,x;
    int a;

    cin>>n>>d>>x;

    //なげるな
    int sum=0;
    REP(i,n){
        cin>>a;
        sum+=(d-1)/a+1;
    }
    cout<<sum+x<<endl;

    return 0;
}