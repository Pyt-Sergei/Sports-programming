#include<bits/stdc++.h>
using namespace std;
main(){
float R,X,Y,x;
cin>>R>>X>>Y;
x=R*X/(R*2-Y);
cout.precision(2);
cout<<fixed<<abs(x);
}
