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



int main(){
    string s;
    cin>>s;

    for(;;){
        if(s.size()==0)break;
        string s5,s6,s7;
        if(s.size()>=5)s5=s.substr(s.size()-5,5);
        if(s.size()>=6)s6=s.substr(s.size()-6,6);
        if(s.size()>=7)s7=s.substr(s.size()-7,7);

        if(s6=="eraser"){
            s=s.substr(0,s.size()-6);
        }else if(s5=="erase"){
            s=s.substr(0,s.size()-5);
        }else if(s7=="dreamer"){
            s=s.substr(0,s.size()-7);
        }else if(s5=="dream"){
            s=s.substr(0,s.size()-5);
        }else{
            cout<<"NO";
            return 0;
        }


    }
    cout<<"YES";
    

    return 0;
}