#include<iostream>
using namespace std;
int main(){
long long n,m,k,w=0,r=0;
cin>>n>>m>>k;
r=(m/k+m%k)*n;
if(k<=m) w=n*(k-1)-n*(m%k);
else return cout<<n*m,0;
cout<<w+r;
}
