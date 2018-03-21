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
string s;

int main(){
    int cnt=0;
    cin>>n;
    REP(i,n){
        cnt=0;
        cin>>s;
        REP(j,s.length()-1){
            if(s.substr(j,5)=="tokyo"){
                j+=4;
                cnt++;
            }
            if(s.substr(j,5)=="kyoto"){
                j+=4;
                cnt++;
            }
        }

        cout<<endl<<cnt;

    }

    

    return 0;
}