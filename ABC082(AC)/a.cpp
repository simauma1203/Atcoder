#include<iostream>
#include<cstdlib>
#include<cmath>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int x=a+b;
    if(x%2)x++;

    cout<<x/2;

    
    

    return 0;
}