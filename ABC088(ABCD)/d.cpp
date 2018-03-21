#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    int h,w;
    char s[51][51];//data
    int v[51][51];//visited and min
    for(int i=0;i<=50;i++){
        for(int j=0;j<=50;j++){
            v[i][j]=-1;
        }
    }
    int wallcnt=0;
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>s[i][j];
            if(s[i][j]=='#')wallcnt++;
        }
    }
    int nx,ny;
    queue<int> qx;
    queue<int> qy;

    v[0][0]=0;
    qx.push(0);
    qy.push(0);

    int dx,dy;
    int nex,ney;
    for(;;){
        if(qx.empty()){
            //cout<<nx<<ny<<"escape"<<endl;
            break;
        }
        nx=qx.front();
        ny=qy.front();
        qx.pop();
        qy.pop();

        //up
        dx=0;dy=1;
        nex=nx+dx;ney=ny+dy;
        if(ney<=w-1){
            if(s[nex][ney]=='.'){
                if(v[nex][ney]==-1){
                    v[nex][ney]=v[nx][ny]+1;
                    qx.push(nex);
                    qy.push(ney);
                }
            }
        }
        //down
        dx=0;dy=-1;
        nex=nx+dx;ney=ny+dy;
        if(0<=ney){
            if(s[nex][ney]=='.'){
                if(v[nex][ney]==-1){
                    v[nex][ney]=v[nx][ny]+1;
                    qx.push(nex);
                    qy.push(ney);
                }
            }
        }

        //left
        dx=-1;dy=0;
        nex=nx+dx;ney=ny+dy;
        if(0<=nex){
            if(s[nex][ney]=='.'){
                if(v[nex][ney]==-1){
                    v[nex][ney]=v[nx][ny]+1;
                    qx.push(nex);
                    qy.push(ney);
                }
            }
        }
        //right
        dx=1;dy=0;
        nex=nx+dx;ney=ny+dy;
        if(nex<=h-1){
            if(s[nex][ney]=='.'){
                if(v[nex][ney]==-1){
                    v[nex][ney]=v[nx][ny]+1;
                    qx.push(nex);
                    qy.push(ney);
                }

            }
        }

    }/*
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
*/
    int saitan=v[h-1][w-1];
    int dekasa=w*h;
    if(saitan==-1){
        cout<<-1;
        return 0;
    }
    int kai=dekasa-1-saitan-wallcnt;
    cout<<kai;
    
    return 0;
}