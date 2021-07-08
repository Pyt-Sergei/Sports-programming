#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m], s1[n],s2[m];
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
}
for(int i=0;i<n;i++){
    int s=0;
    for (int j=0;j<m;j++) s+=a[i][j];
    s1[i]=s;
}
for (int j=0;j<m;j++){
    int s=0;
    for(int i=0;i<n;i++) s+=a[i][j];
    s2[j]=s;
}
for(int i=0; i<n;i++) cout<<s1[i]<<" ";
cout<<endl;
for(int j=0;j<m;j++) cout<<s2[j]<<" ";
cout<<endl;
cout<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (j==m-1) cout<<a[i][j]<<endl;
            else cout<<a[i][j]<<" ";

        }
}
}
