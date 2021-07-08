#include<iostream>
using namespace std;
int main(){
long long n,a,b=3,s=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    if(a==1){
        s+=b; b++;
    }
    else b=max(3ll,b-3);
}
cout<<s;
}
