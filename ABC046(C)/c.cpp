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

int n;
ll a,t;
ll a_,t_;
ll mina=1,mint=1;
ll mx,mn;
int main(){
    cin>>n;
    REP(i,n){
        cin>>t>>a;

        ll n1,n2;
        //find minimum n such as mint<=t*n mina<=a*n

        //mint/t<=n
        n1=mint/t;
        if(mint%t)n1++;

        n2=mina/a;
        if(mina%a)n2++;
        
        mina=a*max(n1,n2);
        mint=t*max(n1,n2);
    }
    cout<<mina+mint<<endl;
    

    return 0;
}