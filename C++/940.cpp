#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin>>n>>s;
s[n-1]='7';
for(int i=0;i<s.length();i++){
    if(s[i]>='A' && s[i]<='Z') cout<<s[i];
}
}
