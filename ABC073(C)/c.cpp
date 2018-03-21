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
ll c[100010];
int cnt,flag;
int cc;
int main(){
    cin>>n;
    REP(i,n){
        cin>>c[i];
        
/*
        REP(j,i){
            if(c[j]==c[i]){
                cout<<"kaburi"<<endl;
                c[j]=0;
                c[i]=0;
            }
        }
        */
    }
    sort(c,c+n);


    REP(i,n){
        if(c[i]==c[i+1]){
            cnt++;
        }else{
            if(cnt%2==0)cc++;
            cnt=0;
        }
    }
    cout<<cc;
    

    return 0;
}