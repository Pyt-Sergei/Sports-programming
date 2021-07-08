#include<bits/stdc++.h>
using namespace std;

int n, m, b1=0, w1=0, b2=0, w2=0;

int main(){

cin>>n>>m;

vector< vector< char > > h( n, vector< char > (m) );

for(int i=0; i<n; i++) {
    for( int j=0; j<m; j++){

        cin>>h[i][j];

        if( (i+j)%2 == 0 ){ if( h[i][j] == 'W' ) w2++; else b2++; }

        else{ if( h[i][j] == 'W' ) w1++; else b1++; }

    }
}


if( b1 + w2 < b2 + w1 ) {

    cout<<b1+w2<<'\n';
    if( b1 + w2 == 0 ) return 0;


    for(int i=0; i<n; i++)

        for(int j=0; j<m; j++){

            if( (i+j)%2 == 0 ){
                    if( h[i][j] == 'W' ) cout<<i+1<<' '<<j+1<<'\n';
            }

            else {
                if( h[i][j] == 'B' ) cout<<i+1<<' '<<j+1<<'\n';
            }


    }
}

else{

    cout<<b2+w1<<'\n';

    if( b2 + w1 == 0 ) return 0;


    for(int i=0; i<n; i++)

        for(int j=0; j<m; j++){

            if( (i+j)%2 == 0 ){
                    if( h[i][j] == 'B' ) cout<<i+1<<' '<<j+1<<'\n';
            }

            else {
                    if( h[i][j] == 'W' ) cout<<i+1<<' '<<j+1<<'\n';
            }

        }

}

}

