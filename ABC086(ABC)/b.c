#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);

    char a2[8],b2[8];
    sprintf(a2,"%d",a);
    sprintf(b2,"%d",b);

    c=atoi(strcat(a2,b2));
    int flag=0;
    for(int i=1;i*i<=c;i++){
        if(i*i==c){
            printf("Yes"); 
            flag=1;
        }
    }
    if(flag==0)printf("No");
    return 0;
}