#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int a,b;
    char s[20];
    scanf("%d%d",&a,&b);
    scanf("%s",s);

    int flag=1;

    for(int i=0;i<=a+b;i++){
        if(i==a){
            if(s[a]!='-'){
                flag=0;
                break;
            }
        }
        else{
            if(!('0'<=s[i] && s[i]<='9')){
                flag=0;
                break;
            }
        }
    }

    if(flag){
        puts("Yes");
    }else{
        puts("No");
    }
    
    return 0;
}