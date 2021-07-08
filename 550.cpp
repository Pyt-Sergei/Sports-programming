#include<bits/stdc++.h>
using namespace std;
int main(){
int y;
string k;
cin>>y;
if(y<10) k="000";
if(y>=10 && y<100) k="00";
if(y>=100 && y<1000) k="0";
if(y>=1000) k="";
if(y%400==0 || y%4==0 && y%100!=0) cout<<12<<"/"<<"09"<<"/"<<k<<y;
else cout<<13<<"/"<<"09"<<'/'<<k<<y;
}
