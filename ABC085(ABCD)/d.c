#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int desc(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}

int main(){
    int n,h,a[100001],b[100001];
    a[0]=0;
    b[0]=0;
    //n=100;
    int pri,count;
    scanf("%d%d",&n,&h);
    for(int i=1;i<=n;i++){
        //a[i]=rand();
        scanf("%d%d",&a[i-1],&b[i-1]);
    }
    qsort(a,n,sizeof(int),desc);
    b[n]=a[0];
    qsort(b,n+1,sizeof(int),desc);
    
    if(a[0]>=b[0]){
        if(!(h%a[0])){
            count=h/a[0];
        }else{
            count=h/a[0]+1;
        }
        printf("%d",count);//
        return 0;
    }
    int maxsum=0;
    for(int i=0;i<=n;i++){
        if(a[0]==b[i]){
            pri=i;
            break;
        }
        maxsum+=b[i];
    }
    int sum=0;
    int j,ok=0;
    count=0;
    for(int i=0;-1<i;i++){
        
        sum=0;

        if(h<=maxsum){
        for(j=0;j<pri;j++){
            sum+=b[j];
            if(h<=sum){
                count+=j+1;
                ok=1;
                break;
            }
        }
        }
        if(ok)break;
        
        count++;
        h-=a[0];
        if(h<=0)break;
        
    }
    
    
    printf("%d",count);

    return 0;
}