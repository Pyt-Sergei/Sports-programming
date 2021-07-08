#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int k=0;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
        cout<<(char)('a'+k);
        k=0;
    }
    else k++;
}
}
