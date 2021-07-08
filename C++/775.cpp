#include<iostream>
typedef long long ll;
using namespace std;
ll n,m,k=2;
int main(){
cin>>n>>m;
while(k<=m+n){
    k*=2;
    if(k>n && k<=m+n)return cout<<k,0;
}
cout<<"NO";
}
