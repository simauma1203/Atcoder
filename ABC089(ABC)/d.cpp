//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;

int h,w,d,q;
int l[100010],r[100010];
//int a[305][305];

int nowi,nowj;
int nexti,nextj;
//
int nowx,nextx;
int syouhi;
int a[310][310];
int ai[90050];
int aj[90050];

int main(){

    cin>>h>>w>>d;
    REP(i,h){
        REP(j,w){
            cin>>a[i][j];
            ai[a[i][j]]=i;
            aj[a[i][j]]=j;
            //cout<<0;
        //cin>>a[i][j];
        }
    }
    cin>>q;
    REP(i,q)cin>>l[i]>>r[i];

    //cout<<"abc";

    //qかいじつぎ
    REP(i,q){
        int syouhi=0;
        nowx=l[i];

        if(l[i]==r[i]){
            cout<<0<<endl;
            continue;
        }

        //いまどこ
        nowx=l[i];
        nowi=ai[l[i]];
        nowj=aj[l[i]];
        
        for(;;){
            if(nowx==r[i]){
                cout<<syouhi<<endl;
                break;
            }
            //つぎどこ
            nextx=nowx+d;
            nexti=ai[nextx];
            nextj=aj[nextx];

            syouhi+=abs(nexti-nowi)+abs(nextj-nowj);
            nowi=nexti;
            nowj=nextj;
            nowx=nextx;
        }


    }



    return 0;
}