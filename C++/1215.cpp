#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m[100000],x,r=1e9,b=1e9;
cin>>n;
for(int i=0;i<n;i++) cin>>m[i];
cin>>x;
for(int i=0;i<n;i++) if(abs(x-m[i])<r || abs(x-m[i]==r&&m[i]<b)) {r=abs(x-m[i]); b=m[i];}
cout<< b;
}
