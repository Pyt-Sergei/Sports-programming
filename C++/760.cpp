#include<iostream>
using namespace std;

double n,v,s,a,b,t;

int main(){

cin>>n>>v>>s;
t=s*60/v;

for(int i=0;i<n;i++){
    cin>>a>>b;
    t+=b;
}

cout.precision(2);
cout<<fixed<<t;

}
