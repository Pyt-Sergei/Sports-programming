#include<iostream>
using namespace std;
int main(){
int v,t,s;
cin>>v>>t;
if(v>0) s=v*t%109+1;
else s=109+v*t%109+1;
cout<<s;
}
