#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,a,b;
    int c;
    int q;
    int cnt=0;
    int v;
    cin>>n>>a>>b;

    for(int i=1;i<=n;i++){
        c=i;
        v=0;
        for(;;){
            q=c%10;
            c=(c-q)/10;
            v+=q;
            if(!c)break;
        }
        if(a<=v && v<=b)cnt+=i;
    }
    cout<<cnt;
    return 0;
}