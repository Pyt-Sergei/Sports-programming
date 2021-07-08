#include<iostream>
using namespace std;
int main(){
int n,m,mi_n,ma_x;
cin>>n>>m;
if(n==0 && m==0) return cout<<0<<" "<<0, 0;
if(n==0) return cout<<"Impossible", 0;
ma_x=n+m-(m!=0);
if(n>=m) mi_n=n;
else mi_n=m;
cout<<mi_n<<" "<<ma_x;
}
