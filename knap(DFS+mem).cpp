#include<iostream>
using namespace std;

//amount
int am=8;
//weight
int w[10]={300,500,200,600,900,1360,800,250};
//value
int v[10]={400,250,980,340,670,780,570,800};

int dp[9][2501];//ここ+1してとらんといけん

//i番目までの最大価値
int knapsack(int i,int e){//e=空き容量
    int p1,p2;
    if(am<=i){
        return 0;
    }else if(e<w[i]){//容量不足
            if(dp[i+1][e]==-1)return dp[i+1][e]=knapsack(i+1,e);
            return dp[i+1][e];
    }else{
        //場合分けしてknapsack
        if(dp[i+1][e]==-1)dp[i+1][e]=knapsack(i+1,e);
        //}else{
        //    p1=dp[i+1][e];
        //}

        if(dp[i+1][e-w[i]]==-1)dp[i+1][e-w[i]]=knapsack(i+1,e-w[i]);
        //}else{
        //   p2=dp[i+1][e-w[i]]+v[i];
        //}
        p1=dp[i+1][e];
        p2=dp[i+1][e-w[i]]+v[i];
        if(p1>p2){
            return p1;
        }else{
            return p2;
        }
    }
}

int main(){
    int p;

    for(int i=0;i<9;i++){
        for(int j=0;j<2500;j++){
            dp[i][j]=-1;
        }
    }
    dp[0][0]=0;

    p=knapsack(0,2500);
    cout<<p<<endl;

    return 0;
}