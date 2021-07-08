#include<iostream>
using namespace std;
int main(){
long long a,b,ma,Ma,mb,Mb,m,M;
cin>>a>>b;
ma=a/2+a%2;
mb=b/2+b%2;
m=max(ma,mb);
M=min(a,b);
cout<<m<<" "<<M;
}
