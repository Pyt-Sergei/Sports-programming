#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m], t[n][m];
for(int i=0;i<n;i++){
        int J=m;
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
            t[i][J-1]=a[i][j];
            J--;
        }
}
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<t[i][j]<<" ";
        cout<<endl;
}
}
