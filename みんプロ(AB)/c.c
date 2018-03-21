#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int desc(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}

int main(){
    int n;
    int x[20],c[20],v[20];
    int isa[20],ist[20];

    int selli=0;
    int canbuyi[20];

    for(int i=0;i<=19;i++){
        ist[i]=0;
        isa[i]=0;
        x[i]=0;
        c[i]=0;
        v[i]=0;
        canbuyi[i]=-1;
    }

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i-1]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&c[i-1]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i-1]);
    }

    //しきんちょーたつするぞー
    while(1){
        
        //つぎの売却でかえるものが2ついじょうあるなら
        int canbuy=0;
        int kaiso=0;
        for(int i=0;i<=n-1;i++){
            if(isa[i]==0){
                if(c[i]<=tmoney+x[celli])canbuy++;
            }
        }
        if(canbuy<2){
            break;
        }
        if()


        //うる
        tmoney+=x[selli]
        selli++;

        //かえる中で一番かち高いの
        
        int worthesti=19;
        for(int i=0;i<=n-1;i++){
            if(c[i]<=tmoney){
                if(isa[i]==0){
                    if(v[worthesti]<=v[i])worthesti=i;
                }
            }
        }
        isa[worthesti]=1;//じょがい
    }
    int cnt=0;
    for(int i=0;i<=n-1;i++){
        if(isa[i]==0 && c[i]<=tmoney){
            canbuyi[cnt]=i;
            cnt++;
        }
    }

    
    for(int j=1;j<=(2,cnt);j++){
        int yotei=0;
        for(int i=0;i<=cnt-1;i++){
            if(i%pow(2,i))yotei+=v[canbuyi[i]];
        }
        if()
    }










    return 0;
}