#include<iostream>
typedef long long ll;
using namespace std;

ll n,p,s1=0,s2=0;

int sum(int n,int p){
    ll s=0;
    while(n!=0){
        s+=n%p;
        n/=p;
    }

    return s;
}

int  main(){

cin>>n>>p;
s1=sum(n,p);

cin>>n>>p;
s2=sum(n,p);

if(s1 == s2) cout<<s1;
else cout<<0;

}
