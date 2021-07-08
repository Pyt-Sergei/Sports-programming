#include<iostream>
using namespace std;
int main(){
double  x,n=2,l;
cin>>x;
while(l<x){
    l+=1/n;
    n++;
}
cout<<int(n-2)<<" "<<"card(s)";

}
