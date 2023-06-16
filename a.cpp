#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int i,j,g,h,flag=0,u,l,m,n;
char str[500][500];
bool arr[500][500]={false};
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
void dfs(int x,int y){
    if(str[x][y]=='E'){
        flag=1;
        return ; 
    }
    for(i=0;i<=3;i++){
      u=x+dx[i];
      l=y+dy[i];
      if(u>=0&&u<m&&l>=0&&l<n&&str[u][l]!='#'&&!arr[u][l]){
          arr[u][l]=true;
          dfs(u,l);
      }    
    }
} 
int main(){
    while(1){
    flag=0;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>str[i][j];
            if(str[i][j]=='s'){
                g=i;
                h=j;
            }
        }
    }
    dfs(g,h);
    if(flag==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl; 
  }
  return 0;
}