#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n,y;
    scanf("%d%d",&n,&y);

    for(int i=0;i<=n;i++){
        if(y<i*10000)break;

        for(int j=0;j<=n;j++){
            if(n<i+j)break;
            if(y<i*10000+j*5000)break;

            int k=n-i-j;

            if(10000*i+5000*j+1000*k==y){
                printf("%d %d %d",i,j,k);
                return 0;
            }

            
        }
    }
    printf("-1 -1 -1");
    return 0;
}