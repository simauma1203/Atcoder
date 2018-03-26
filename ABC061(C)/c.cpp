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

ll n,k;
ll t[100010];
ll a,b;

int main(){
    
    cin>>n>>k;
    REP(i,n){
        cin>>a>>b;
        t[a]+=b;
    }
    
    ll cnt=k;
    ll ans;
    REP(i,100005){
        cnt-=t[i];
        if(cnt<=0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}