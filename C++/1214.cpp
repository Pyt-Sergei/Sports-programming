#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m[100000],x,k=0;
cin>>n;
for(int i=0;i<n;i++) cin>>m[i];
cin>>x;
for(int i=0;i<n;i++) if(m[i]==x) k++;
cout<<k;
}
