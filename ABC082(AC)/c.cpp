#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int n;
long long int a[100002];
int i,now;
int nowcnt;
int rm;
int main(){
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    now=a[0];
    for(i=0;i<n+1;i++){
        if(now!=a[i]){
            if(a[i-1]<nowcnt)rm+=nowcnt-a[i-1];
            if(a[i-1]>nowcnt)rm+=nowcnt;
            now=a[i];
            nowcnt=0;
        }
        nowcnt++;

    }
    cout<<rm;


    return 0;
}