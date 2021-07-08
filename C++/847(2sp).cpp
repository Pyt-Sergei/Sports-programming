#include<bits/stdc++.h>
using namespace std;

int num(string s1, string s2, int x){

int k1=0, k2=0;
for(int i=0; i<s1.length(); i++){
    if( s1[i]==s2[x]) k1++;
    if(s2[i]==s2[x]) k2++;
}

if(k1==k2) return 1;
else return 0;

}

string s1,s2;

int main(){

cin>>s1>>s2;

if(s1.length() != s2.length()) return cout<<"NO", 0;

for(int i=0; i < s1.length(); i++){
    if(s1[i] == s2[i] || num(s1,s2,i)==0) return cout<<"NO" ,0;
}
cout<<"YES";
}
