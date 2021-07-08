#include<bits/stdc++.h>
using namespace std;

int n,x,y,l,x1,y1;
double d(int x,int y,int x1,int y1){
return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
}

int main(){

cin>>n>>x>>y>>l;

for(int i=1;i<=n;i++){

    cin>>x1>>y1;

    if(d(x,y,x1,y1) <= l ) return cout<<i, 0;
}
cout<<"Yes";
}
