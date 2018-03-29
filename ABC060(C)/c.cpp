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

ll n,T;
ll t[200020];
ll sum;
ll ov;

int main(){
    cin>>n>>T;

    REP(i,n){
        cin>>t[i];
        sum+=T;
    }
    
    //かぶる可能性があるのはn-1区間
    //差からかぶっているとこをだす
    REP(i,n-1){
        ll d;
        d=t[i+1]-t[i]-T;
        if(0>d)sum+=d;
    }
    
    cout<<sum<<endl;




    return 0;
}