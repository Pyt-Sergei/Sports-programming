#include<iostream>
int main(){
typedef long long ll;
ll l=0,r ,n,k=0;
std::cin>>n;
r=n;
while(r-l>1){
    ll m=(r+l)/2;
    if(m<n) l=m; else r=m;
    k++;
}
std::cout<<k;
}
