#include<bits/stdc++.h>
using namespace std;

int n,w;
vector<int> m;

int main(){

cin>>n>>w;

m.resize(n);
for(int i=0;i<n;i++) cin>>m[i];

sort( m.rbegin(), m.rend());

int j=n-1,sum=0,k=0;



for(int i=0; i<=j; i++){

    sum+=m[i];

    if(sum<w){
        while ( sum <= w ){
            sum+=m[j];
            j--;

            if(sum>w) j++;
        }
        if(sum>w) sum-=m[j];
    }

    k++;



}
cout<<k;
}
