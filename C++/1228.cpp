#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;i++) if(n%i==0) return 0;
    return 1;
}
int main(){
int n,number,sum=0;
for(int i=0;i<3;i++){
        cin>>n;
        if(IsPrime(n)) sum+=n;
}
cout<<sum<<endl;
if(IsPrime(sum)) cout<<"Yes";
else cout<<"No";
}
