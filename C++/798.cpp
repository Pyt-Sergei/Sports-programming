#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n,i,j,c;
string s;
cin>>m>>n>>i>>j>>c;
if(m%2==0 || n%2==0) return cout<<"equal", 0;
if((i+j)%2==0 && c==0 || (i+j)%2!=0 && c==1) s="black";
if((i+j)%2==0 && c==1 || (i+j)%2!=0 && c==0) s="white";
cout<<s;
}
