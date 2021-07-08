#include<bits/stdc++.h>
using namespace std;
main(){
int n,m;
cin>>n>>m;
int a[n],s=0,j=n-1;
for(int i=0; i<n; i++) cin>>a[i];
sort(a,a+n);
for(int i=0; i<m; i++){
    if(a[j]<=0) return cout<<s, 0;
    s+=a[j];
    j--;
}
cout<<s;
}
