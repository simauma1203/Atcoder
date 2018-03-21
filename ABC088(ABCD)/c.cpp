#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int c[4][4];
    int max=0;
    int a[4],b[4];
    int flag;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>c[i][j];
            if(max<c[i][j])max=c[i][j];
        }
    }

    for(a[1]=0;a[1]<=max;a[1]++){
        b[1]=c[1][1]-a[1];
        b[2]=c[1][2]-a[1];
        b[3]=c[1][3]-a[1];
        a[2]=c[2][2]-b[2];
        a[3]=c[3][3]-b[3];
        flag=1;
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
                if(a[i]+b[j]!=c[i][j])flag=0;
            }
        }
        if(flag){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    

    return 0;
}
