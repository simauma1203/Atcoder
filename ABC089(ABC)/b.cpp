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

int p,w,g,y;

int main(){

    int n;
    char a[10];
    cin>>n;
    REP(i,n){
        cin>>a;
        if(a[0]=='Y'){
            cout<<"Four"<<endl;
            return 0;
        }

    }
    cout<<"Three"<<endl;
    

    return 0;
}