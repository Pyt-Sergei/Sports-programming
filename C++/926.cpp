#include<bits/stdc++.h>

using namespace std;

int n,k=0;;
vector<string> c;


int main(){

cin>>n;
c.resize(n);

for(int i=0;i<n;i++) cin>>c[i];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) if (c[i][j] == 'C') k++;
}

int s=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(c[i][j] == 'C') s++;
        if( s <= k/2 ) c[i][j] = '1';
        else c[i][j] = '2';
    }
}

for(auto q:c) cout<<q<<endl;
}
