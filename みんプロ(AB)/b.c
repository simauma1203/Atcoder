#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int x,k;

    scanf("%d%d",&x,&k);

    int a=pow(10,k);

    int d=(x/a)+1;

    int min=d*a;
    if(min==x)min=x+a;

    printf("%d",min);

    return 0;
}