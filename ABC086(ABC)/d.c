#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    
    int n,k;
    int x[100001],y[100001];
    char c[100001];
    int col,count,max=0;
    scanf("%d",&n);
    scanf("%d",&k);

    for(int i=1;i<=n;i++){
        scanf("%d%d%c",&x[i],&y[i],&c[i]);
        if(c[i]=='W'){
            x[i]+=k;
        }
    }
    for(int u=0;u<=k-1;u++){
        for(int v=0;v<=k-1;v++){
            count=0;
            for(int i=1;i<=n;i++){
                col=0;
                x[i]+=u;
                y[i]+=v;

                x[i]=x[i]%(2*k);
                y[i]=y[i]%(2*k);

                if(k<=x[i]){
                    col=!col;
                }
                if(k<=y[i]){
                    col=!col;
                }

                if(col)count++;
            }
            if(max<count)max=count;
            if(max<n-count)max=n-count;
        }
    }

    printf("%d",max);

    return 0;
}