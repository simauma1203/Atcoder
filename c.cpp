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

int n;
ll a[100010];
int c[5];

int main(){
    cin>>n;
    REP(i,n){
        cin>>a[i];
        if(a[i]%4==0){
            a[i]=4;
        }else if(a[i]%2==0){
            a[i]=2;
        }else{
            a[i]=1;
        }
        c[a[i]]++;
    }
    
    int f2=0;
    if(c[2])f2=1;
    if(c[4]==0){
        if(c[2]==n)cout<<"Yes";
        else cout<<"No";
    }else{
        if(c[4]+1>=c[1]+f2)cout<<"Yes";
        else cout<<"No";
    }

    return 0;
}