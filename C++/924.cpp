#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
for( int i=0; i<3; i++) if( s1[i]==s1[i+1] ) if( s2[i]==s1[i] && s2[i]==s2[i+1]) return cout<<"No", 0;
for( int i=0; i<3; i++) if(s2[i]==s2[i+1]) if(s3[i]==s2[i] && s3[i]==s3[i+1]) return cout<<"No", 0;
for( int i=0; i<3; i++) if(s3[i]==s3[i+1]) if(s4[i]==s3[i] && s4[i]==s4[i+1]) return cout<<"No", 0;
cout<<"Yes";
}
