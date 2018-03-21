#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char s[10];

    scanf("%s",s);
    if(s[0]=='y'){
        if(s[1]=='a'){
            if(s[2]=='h'){
                if(s[3]==s[4]){
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");

    return 0;
}