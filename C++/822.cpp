#include<bits/stdc++.h>
using namespace std;
int side(int x1, int y1, int x2, int y2){
    int ab=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    return ab;
}
int main(){
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
double a,b,c;
long  double p,s;
a=sqrt(side(x1,y1,x2,y2));
b=sqrt(side(x1,y1,x3,y3));
c=sqrt(side(x2,y2,x3,y3));
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<s;
}



