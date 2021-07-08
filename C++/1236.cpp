#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m], t[n][m];
int I=n;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
            t[I-1][j]=a[i][j];
        }
        I--;
}
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<t[i][j]<<" ";
        cout<<endl;
}
}

