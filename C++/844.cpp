#include<iostream>
using namespace std;
main(){
long long a,b,i;
cin>>a>>b;
i=min(a,b);  // можно и без этого(i=1)
while(i*i<=a*b){
    if(i*i==a*b) return cout<<i,0;
    i++;
}
cout<<0;
}
