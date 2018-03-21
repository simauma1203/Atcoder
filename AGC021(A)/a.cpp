#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    long long int n,q[100];
    int d[100];
    int i=0;
    cin>>n;

    for(;;){
        i++;
        q[i]=n%10;
        n-=q[i];
        n/=10;
        if(n==0)break;
    }
    int max=0;

    for(int j=1;j<=i-1;j++){
        if(q[j]<=8){
            //if(0<q[j+1]){
                q[j]=9;
                q[j+1]--;
            //}
        }
    }
    for(int j=1;j<=i;j++){
        max+=q[j];
    }

    cout<<max;
    

    return 0;
}