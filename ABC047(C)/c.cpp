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

string s;
string f;
int cnt;
int main(){
    cin>>s;
    f='a';
    REP(i,s.size()){
        if(f[0]!=s[i]){
            cnt++;
            f[0]=s[i];
        }
    }
    cout<<cnt-1;
    
    

    return 0;
}