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

int a,b,c,d,e,f;

int main(){
    cin>>a>>b>>c>>d>>e>>f;
    //water 100a 100b
    //suger c d
    // e/100 suger/water
    //e*suger=100*water
    int w,s;
    int max;
    int i,j,k,l;
    int sum;
    
    ll noudo,maxnoudo=0;
    int maxws=0,maxs;


    
    REP(i,31){
        REP(j,31){
            w=i*100*a+j*100*b;
            if(w>f)break;
            for(k=0;;k++){
                if(w+k*c>f)break;
                if(!w)break;
                for(l=0;;l++){
                    s=k*c+l*d;
                    if(w+s>f)break;//あふれる
                    if(s>e*(w/100))break;//とけのこる
                    //if(w+s==2634 && s==934)cout<<"hui";
                    noudo=(s*1000000000000)/(w+s);
                    if(noudo>=maxnoudo){
                        //if(maxws==2634 && maxs==934)cout<<"omg";
                        maxnoudo=noudo;
                        //cout<<noudo<<endl;
                        //if(noudo==50)cout<<w+s<<s;
                        maxws=w+s;
                        maxs=s;
                    }


                }
            }
        }
    }
    
    cout<<maxws<<" "<<maxs;

    return 0;
}