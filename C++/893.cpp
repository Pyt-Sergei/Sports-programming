#include<iostream>
using namespace std;

int main(){
int n;

cin>>n;

if(n==1) cout<<1;
if(n==2) cout<<2;

if(n>2){

long long N=n-2,S,sum;

S=(1+N)*N/2;
sum=S;
for(int i=N; i>=1; i--){
    S-=i;
    sum+=S;
}
sum*=6;
cout<<sum;
}


}
