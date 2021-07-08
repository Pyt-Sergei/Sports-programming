#include<iostream>
using namespace std;
int main(){
long long n,a,b,c;
cin>>n>>b>>c;
while(n>1){
    a=c-b;
    c=b;
    b=a;
    n--;
}
cout<<b<<" "<<c;
}
