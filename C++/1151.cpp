#include<bits/stdc++.h>
using namespace std;
int main(){
int a=0,b=0,k=0,length=0;
char c;
while(cin>>c){
    if(c>='a' && c<='z') a++;
    if(c>='A' && c<='Z' ) b++;
    if(c>='0' && c<= '9') k++;
    length++;
}
if(length<12) { cout<<"No" ;return 0;}
if(a*b*k==0) cout<<"No";
else cout<<"Yes";
}
