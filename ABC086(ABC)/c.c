#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    int t,x,y;
    int _t=0,_x=0,_y=0;
    int dt,dx,dy;
    int dist;

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //printf("%d",i);
        scanf("%d%d%d",&t,&x,&y);
        dt=t-_t;
        dx=x-_x;
        dy=y-_y;

        dist=abs(dx)+abs(dy);

        if(dt<dist){
            printf("No");
            return 0;
        }
        if((dist%2)^(dt%2)){
            printf("No");
            return 0;
        }   
    }
    printf("Yes");
    return 0;
}