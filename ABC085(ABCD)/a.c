#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char s[12];
    scanf("%s",s);

    s[0]='2';
    s[1]='0';
    s[2]='1';
    s[3]='8';
    //strcpy(s,"2018");

    printf("%s",s);

    return 0;
}