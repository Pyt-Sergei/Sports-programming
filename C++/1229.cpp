#include<iostream>
using namespace std;
int side(int x1, int y1, int x2, int y2){
    int ab=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    return ab;
}
int main(){
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
int a,b,c;
a=side(x1,y1,x2,y2);
b=side(x1,y1,x3,y3);
c=side(x2,y2,x3,y3);
if(a==b+c || b==a+c || c==a+b) cout<<"Yes";
else cout<<"No";
}
