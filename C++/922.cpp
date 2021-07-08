#include<iostream>
using namespace std;

float t1, t2, s1, s2, s, k=0,S=0;

int main(){

cin>>t1>>t2>>s1>>s2>>s;

if( s2 >= s1 ) return cout<<"NO", 0;

float v = (s1-s2)/(t1+t2);

cout<<v<<'\n';

while( S < s - s1 ){

    k+= t1 + t2;
    S+=s1-s2;

}

k+= (s-S)/v;

cout<<k;

}
