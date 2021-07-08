#include<iostream>
using namespace std;
int main(){
typedef long long ll;
ll A,K,B,M,X,l=0,r=1;
cin>>A>>K>>B>>M>>X;
while((r-r/K)*A+(r-r/M)*B<X) r*=2;
while(r-l>1){
    ll m=(r+l)/2;
    if((m-m/K)*A+(m-m/M)*B<X) l=m; else r=m;
}
cout<<r;
}
