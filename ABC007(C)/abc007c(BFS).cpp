#include<iostream>
#include<queue>
using namespace std;

int r,c;
char cell[51][51];
char l[51];
int s[51][51];//stat of visited
int m[51][51];//min time to arrive
int sy,sx,gy,gx;
int nowx,nowy;
int nx,ny;

int main(){

    queue<int> qx;
    queue<int> qy;

    cin>>r>>c;
    cin>>sy>>sx;
    cin>>gy>>gx;

    for(int iy=1;iy<=r;iy++){
        cin>>l;
        for(int ix=1;ix<=c;ix++){
            cell[ix][iy]=l[ix-1];
        }
    }


    qx.push(sx);
    qy.push(sy);
    m[sx][sy]=0;
    for(;;){
        if(qx.empty())break;

        nowx=qx.front();
        nowy=qy.front();
        qx.pop();
        qy.pop();

        //up
        nx=nowx;
        ny=nowy-1;
        if(1<=ny){
            if(cell[nx][ny]=='.'){
                if(s[nx][ny]==0){
                    qx.push(nx);
                    qy.push(ny);
                    s[nx][ny]=1;
                    m[nx][ny]=m[nowx][nowy]+1;
                }
            }
        }
        //down
        nx=nowx;
        ny=nowy+1;
        if(ny<=r){
            if(cell[nx][ny]=='.'){
                if(s[nx][ny]==0){
                    qx.push(nx);
                    qy.push(ny);
                    s[nx][ny]=1;
                    m[nx][ny]=m[nowx][nowy]+1;
                }
            }
        }
        //left
        nx=nowx-1;
        ny=nowy;
        if(1<=nx){
            if(cell[nx][ny]=='.'){
                if(s[nx][ny]==0){
                    qx.push(nx);
                    qy.push(ny);
                    s[nx][ny]=1;
                    m[nx][ny]=m[nowx][nowy]+1;
                }
            }
        }
        //right
        nx=nowx+1;
        ny=nowy;
        if(nx<=c){
            if(cell[nx][ny]=='.'){
                if(s[nx][ny]==0){
                    qx.push(nx);
                    qy.push(ny);
                    s[nx][ny]=1;
                    m[nx][ny]=m[nowx][nowy]+1;
                }
            }
        }

    }
    
    cout<<m[gx][gy]<<endl;

    return 0;
}