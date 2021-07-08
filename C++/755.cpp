#include<iostream>
using namespace std;
int main(){
int  x,y,z;
cin>>x>>y>>z;
if(z>x+y) {cout<<"Impossible"; return 0;}
else cout<<x+y-z;
}
