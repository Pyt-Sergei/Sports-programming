#include<bits/stdc++.h>
using namespace std;

int n, m, k1=0, k2=0;


int main(){

cin>>n>>m;

vector< vector< char > > h(n, vector<char>( m ) );
vector<int> nums;

 for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) cin>>h[i][j];



for(int i=0; i<n; i++){
    for(int j=0 ; j<m; j++){

        if( (i + j)%2 == 0 ){

            if( h[i][j] != 'B' ) k1++;
            if( h[i][j] != 'W' ) k2++;

        }

        else{

            if ( h[i][j] != 'W' ) k1++;
            if ( h[i][j] != 'B' ) k2++;
        }

    }
}

if( k1==0 || k2==0 ) return cout<<0, 0;

if ( k1 <= k2 ){

    cout<<k1<<'\n';

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){

        if ( (i+j)%2 == 0 )
            if( h[i][j] != 'B' ) cout<<i+1<<' '<<j+1<<'\n';

        else
            if ( h[i][j] != 'W' ) cout<<i+1<<' '<<j+1<<'\n';


    }


}

else{

    cout<<k2<<'\n';

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){

         if ( (i+j)%2 == 0 )
            if( h[i][j] != 'W' ) cout<<i+1<<' '<<j+1<<'\n';

        else
            if ( h[i][j] != 'B' ) cout<<i+1<<' '<<j+1<<'\n';
    }
}









}
