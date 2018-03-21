
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

int a[5];
int p;
int main(){
    //REP(i,4)cin>>a[i];
    cin>>p;
    REP(i,4){
        int r=p%10;
        a[3-i]=r;
        p=(p-r)/10;
    }
    int i;

    for(i=0;i<(1<<3);i++){
        int sum=a[0];
        //cout<<"a";
        REP(j,3){
            //cout<<"a";
            //cout<<(i>>j&1);
            if((i>>j&1)==1)sum+=a[j+1];
            else sum-=a[j+1];
        }
        //cout<<sum<<endl;
        if(sum==7){
            //cout<<"AC";
            break;
        }
    }
    

    REP(j,3){
        cout<<a[j];
        if((i>>j&1)==1)cout<<"+";
        else cout<<"-";
    }
    cout<<a[3]<<"=7"<<endl;
    

    return 0;
}