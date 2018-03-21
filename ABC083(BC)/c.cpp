#include<iostream>
#include<string>
using namespace std;

int main(){
    long long int x,y,a;
    cin>>x>>y;
    int cnt;
    a=x;
    for(int i=1;;i++){
        if(y<a)break;
        cnt++;
        a=a*2;
    }
    cout<<cnt;
    return 0;
}