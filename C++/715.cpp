#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,k=0;
string s;
cin>>n>>m;
int a[n][m],b[n][m];
for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<s.length();j++){
        if(s[j]=='W') a[i][j]=1;
        else a[i][j]=0;
    }
}
cout<<endl;
for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<s.length();j++){
        if(s[j]=='W') b[i][j]=1;
        else b[i][j]=0;
    }
}
for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(a[i][j]==b[i][j]) k++;
cout<<k;
}
