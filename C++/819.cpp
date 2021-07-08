#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
unsigned long long s,v;
s=2*(a*b+a*c+b*c);
v=a*b*c;
cout<<s<<" "<<v;
}
