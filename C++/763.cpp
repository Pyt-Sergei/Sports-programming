#include<iostream>
using namespace std;
main(){
long long i,j;
cin>>i>>j;
if(i==1 && j==1) cout<<0;
else{
if(i==j) cout<<2;
else cout<<1;
}
}
