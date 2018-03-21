//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;

int n;
int cnt=0;
char g[20];
string s[10010];
ll ans=0;

int v1[10]={0,0,0,0,0,0,1,1,1,2};
int v2[10]={1,1,1,2,2,3,2,2,3,3};
int v3[10]={2,3,4,3,4,4,3,4,4,4};

int powa(int d,int e){
    if(e<0)return 0;
    return pow(d,e);
}

ll ini[5];

int main(){
    cin>>n;
    REP(i,n){
        cin>>g;
        //g=g.substr(0,1);
        //cout<<g[0];
        if(g[0]=='M'){
            ini[0]++;
        }if(g[0]=='A'){
            ini[1]++;
        }if(g[0]=='R'){
            ini[2]++;
        }if(g[0]=='C'){
            ini[3]++;
        }if(g[0]=='H'){
            ini[4]++;
        }

    }

    int c=0;
    REP(i,5){
        if(ini[i]>0)c++;
    }
    if(c<3){
        cout<<0<<endl;
        return 0;
    }


    REP(i,10){
        ans+=ini[v1[i]]*ini[v2[i]]*ini[v3[i]];
    }


    cout<<ans<<endl;
    
    

    return 0;
}