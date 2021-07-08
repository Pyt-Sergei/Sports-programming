#include<bits/stdc++.h>
using namespace std;
int main(){
int n,p,k=1,m[1000];
cin>>n;
for(int i=0;i<n;i++) cin>>m[i];
cin>>p;
if (m[0]<p) {cout<<1;return 0;}
if(m[n-1]>p) {cout<<n+1;return 0;}
else {
    for(int i=0;i<n;i++) {
            if(m[i]>=p) k++;
            else {cout<<k;return 0;}
}
}
cout<<k;
}
