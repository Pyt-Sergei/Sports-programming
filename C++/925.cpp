#include<iostream>
using namespace std;
int main(){
int e,n,a,b,c,m,M;
cin>>e;
cin>>n>>a>>b>>c;
if(a==0 || b==0 || c==0) cout<<0;
else{
    if(e==1){
        m=min(min(a,b),c);
        M=max(max(a,b),c);
        m=m-(n-a-b-c+m+M+n-M);
        if(m<0) m=0;
    }
    else {
        m=min(min(a,b),c);
    }
    cout<<m;
}
}
