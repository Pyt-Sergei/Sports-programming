#include<iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
cout<<k/n<<" ";
cout<<k%n<<" ";
if(k%n!=0) cout<<n-k%n;
else cout<<0;
}
