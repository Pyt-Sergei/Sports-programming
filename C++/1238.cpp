#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,p;
cin>>n>>m>>p;
int a[n][m],b[m][p],c[n][p];
for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
for(int i=0;i<m;i++) for(int j=0;j<p;j++) cin>>b[i][j];
for(int i=0;i<n;i++){
    for(int s=0;s<p;s++){
            c[i][s]=0;
            for(int j=0;j<m;j++) {
                c[i][s]+=a[i][j]*b[j][s];
            }
}
}
for(int i=0;i<n;i++) {
        for(int j=0;j<p;j++) cout<<c[i][j]<<" ";
        cout<<endl;
}
}
