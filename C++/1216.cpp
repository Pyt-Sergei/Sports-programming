#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m[100000],l,r,M=-1001,index;
cin>>n;
for(int i=0;i<n;i++) cin>>m[i];
cin>>l>>r;
for(int i=l-1;i<r;i++) if(m[i]>M) {M=m[i];index=i;}
cout<<M<<" "<<index+1;
}
