#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int a[150];

    int alice=0,bob=0;

    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<=n-1;i++){
        if(i%2==0){
            alice+=a[i];
        }else{
            bob+=a[i];
        }
    }
    cout<<abs(alice-bob);
    

    return 0;
}