#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int a,k,n;
int b[200001];
int i,j;
int rm;
int main(){
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a;
        b[a-1]++;
    }
    sort(b,b+n);
    rm=n;
    for(i=0;i<k;i++){
        rm-=b[n-i-1];//降順にとるから
    }
    cout<<rm;
    

    return 0;
}