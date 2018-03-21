#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,a[101][3];
    int score;
    int highScore;

    scanf("%d",&n);
    for(int j=1;j<=2;j++){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=1;i<=n;i++){
        score=0;
        for(int j=1;j<=i;j++){
            score+=a[j][1];
        }
        for(int j=i;j<=n;j++){
            score+=a[j][2];
        }
        if(highScore<score)highScore=score;
    }

    printf("%d",highScore);
    return 0;
}