#include<iostream>
using namespace std;
int main(){
long long n,m,M,r,rst=0;
cin>>n;
M=n*6;
r=n%6;
if(r==1) rst=6;
if(r==2) rst=5;
if(r==3) rst=4;
if(r==4) rst=3;
if(r==5) rst=2;
m=n/6+rst;
cout<<m<<" "<<M;
}
