#include<iostream>
using namespace std;

int main(){

    int n;
    int c[500],s[500],f[500];

    cin>>n;
    for(int i=1;i<=n-1;i++){
        cin>>c[i]>>s[i]>>f[i];
    }

    int where,t;
    for(int i=1;i<=n;i++){
        where=i;
        t=0;
        while(1){
            if(where==n)break;
            if(s[where]<=t){
                if(t%f[where]==0){
                    t+=c[where];
                    where++;
                }else{
                    t++;
                }
            }else{
                t++;
            } 
        }
        cout<<t<<endl;

    }

    return 0;
}