#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n,d[101];
    int count=0,flag=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&d[i]);
        flag=0;
        for(int j=1;j<=i-1;j++){
            if(d[j]==d[i]){
                flag=1;
                break;
            }
        }
        if(!flag)count++;
    }
    printf("%d",count);


    return 0;
}