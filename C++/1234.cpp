#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][n] , t[n][n];
for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
int y=n-1;
for(int i=0;i<n;i++){
        int x=n-1;
        for(int j=0;j<n;j++){
                t[x][y]=a[i][j];
                x--;
        }
        y--;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
}
}
