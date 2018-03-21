#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a,b,c,x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&x);
    int count=0;

    for(int ia=0;ia<=10000;ia++){
        if(x<ia*500)break;
        if(a<ia)break;
        for(int ib=0;ib<=10000;ib++){
            if(x<ia*500+ib*100)break;
            if(b<ib)break;
            for(int ic=0;ic<=10000;ic++){
                if(x<ia*500+ib*100+ic*50)break;
                if(c<ic)break;

                if(ia*500+ib*100+ic*50==x)count++;

            }
        }
    }

    printf("%d",count);

    return 0;
}