#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n,a;
    cin>>n>>a;
    int q=n%500;
    if(a<q)cout<<"No";
    else cout<<"Yes";
    

    return 0;
}