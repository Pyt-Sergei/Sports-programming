#include<iostream>
using namespace std;
int main(){
int K,N;
cin>>K>>N;
int n=1,p;
if(N%K==0) {n=N/K; p=K; }
else {
    n+=N/K;
    if(N<=K) p=N;
    else p=N%K;
}
cout<<n<<" "<<p;
}
