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

int n ;
int s[1000];
int mx;

int mn=1000;
int sm;

int main(){
    cin>>n;
    REP(i,n){
        cin>>s[i];
        sm+=s[i];
        if(s[i]%10)mn=min(mn,s[i]);
    }
    if(sm%10){
        cout<<sm;
    }else{
        if(mn==1000)mn=0;
        if((sm-mn)%10)cout<<sm-mn;
        else cout<<0;
    }



    /*
       for(int i=0;i<(1<<n);i++){
        int sum=0;
        REP(j,n){
            sum+=s[j]*((i>>j)&1);
        }
        //cout<<sum<<endl;
        if((sum%10)==0)sum=0;
        mx=max(sum,mx);

    }
    cout<<mx;*/


    return 0;
}