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
ll a[100010];
ll mx,mn;

int main(){
    
    
    cin>>n;
    REP(i,n)cin>>a[i];

    REP(i,n){

        mn=10000000;
        mx=-10000000;
        REP(j,n){
            if(i==j)continue;
            mx=max(mx,a[j]);
            mn=min(mn,a[j]);



        }
        //cout<<mx<<" "<<mn<<endl;


        cout<<abs(mn)*2+abs(mx)*2<<endl;


    }






    return 0;
}