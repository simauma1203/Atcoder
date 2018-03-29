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


int col[9];
int inp;
int ans;
int mn;
int mx;
int n;
int main(){
    cin>>n;
    REP(i,n){
        cin>>inp;
        if(inp<400)col[0]++;
        else if(inp<800)col[1]++;
        else if(inp<1200)col[2]++;
        else if(inp<1600)col[3]++;
        else if(inp<2000)col[4]++;
        else if(inp<2400)col[5]++;
        else if(inp<2800)col[6]++;
        else if(inp<3200)col[7]++;
        else if(3200<=inp)col[8]++;
    }
    REP(i,8){
        if(col[i])ans++;
    }

    if(!col[8]){
        mn=ans;
        mx=ans;
    }else if(col[8]){
        mn=ans;
        mx=ans+col[8];
        if(ans==0)mn=1;
        //if(mx>8)mx=8;
    }
    cout<<mn<<" "<<mx<<endl;

    return 0;
}