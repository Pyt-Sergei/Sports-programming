#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,c,d,m[100000];
cin>>n>>a>>b>>c>>d;
int j=1;
for(int i=0;i<n;i++){ m[i]=j;j++;}
//for(int i=0;i<n;i++) cin>>m[i];
while(b!=a){
        for(int i=a-1;i<b-1;i++) swap(m[i],m[i+1]);
        b--;
}
while (d!=c){
    for(int i=c-1;i<d-1;i++) swap(m[i],m[i+1]);
    d--;
}
for(int i=0;i<n;i++) cout<<m[i];
}
