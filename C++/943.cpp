#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,x,y,k=0,p=0;
cin>>n>>m>>x>>y;
int a[n][m];
for(int i=0;i<n;i++){
        int J=m-1;
        k++;
    for(int j=0;j<m;j++){
        if(k%2!=0){
            a[i][j]=p;
            p++;
        }
        else{
           a[i][J]=p;
           p++;
           J--;
        }
    }
}
//for(int i=0;i<n;i++){
  //  for(int j=0;j<m;j++){
    //    cout<<a[i][j]<<" ";
    //}
   // cout<<endl;
//}
cout<<a[x-1][y-1];
}
