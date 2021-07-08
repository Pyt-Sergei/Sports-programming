#include<bits/stdc++.h>
using namespace std;
int main(){
int n,o[100000],M=-1e9,m=1e9;
cin>>n;
for(int i=0;i<n;i++){
    cin>>o[i];
    if (o[i]>M) M=o[i];
    if(o[i]<m) m=o[i];
}
for(int i=0;i<n;i++) if(o[i]==M) o[i]=m;
for(int i=0;i<n;i++) cout<<o[i]<<" ";
}
