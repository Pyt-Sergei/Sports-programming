#include<bits/stdc++.h>
using namespace std;
int main(){
int s,t,k;
cin>>s>>t;
if(t>s) k=t-s;
else k=12-abs(t-s);
if(k==12)cout<<0;
else cout<<k;
}
