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
#define pb push_back
#define INF 93193111451418101
#define MIN -93193111451418101
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
//----------program from here----------

ll n,m;
ll ans;

int main(){
    cin>>n>>m;

    ll a,b;
    a=n;
    b=m/2;

    ans=min(a,b);

    n-=ans;
    m-=ans*2;

    a=m/4;

    ans+=a;





    /*
    for(;;){
        if(n && m>=2){
            n--;
            m-=2;
            ans++;
        }else if(m>=4){
            m-=4;
            ans++;
        }else{
            break;
        }
    }*/
    
    cout<<ans<<endl;

    





    return 0;
}