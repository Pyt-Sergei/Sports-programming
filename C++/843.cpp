#include<iostream>
int main(){
long long N,M,F,L,n,m,f,k;
std::cin>>N>>M>>F>>L;
k=N-L;
f=k-M;
m=k-F;
n=k-m-f;
std::cout<<n<<" "<<m<<" " <<f;
}

//#include<iostream>
//main(){
//long long N,M,F,L;
//std::cin>>N>>M>>F>>L;
//std::cout<<L+F-N+M<<" "<<N-L-F<<" " <<N-L-M;
//}
