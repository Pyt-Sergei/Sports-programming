#include<iostream>
using namespace std;
int main(){
typedef long long ll;
ll a,b,c,d,r=1,l=0,s;
cin>>a>>b>>c>>d;
s=min(a,b)+min(c,d);
while(r*r<=s) r*=2;
while(r-1>l){
    ll m=(r+l)/2;
    if(m*m<=s) l=m; else r=m;
}
cout<<l;
}
