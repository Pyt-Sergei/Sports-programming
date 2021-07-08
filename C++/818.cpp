#include<iostream>
using namespace std;
int main(){
int k,a,sum=0;
cin>>k;
for(int i=0;i<k;i++){
        cin>>a;
        sum+=a;
}
sum-=k-1;
cout<<sum;
}
