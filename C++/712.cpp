#include<iostream>
using namespace std;
int main(){
typedef long long ll;
ll n,w,h,l=0,r=1;
cin>>w>>h>>n;
while((r/w)*(r/h)<n) r*=2;
while(r-l>1){
    ll m=(r+l)/2;
    ll W=m/w;
    ll H=m/h;
    if(W*H<n) l=m; else r=m;
}
cout<<r;
}
