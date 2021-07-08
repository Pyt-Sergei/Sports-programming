#include<bits/stdc++.h>
using namespace std;

int n;

int main(){

cin>>n;
int dp[n][n];

for(int i=0; i<n; i++) cin>>dp[i][i];

for(int x=1; x<n; x++){
    int j=0;
    for(int i=x; i<n; i++){

        if(n%2==0){
            if((i+j)%2 != 0) dp[i][j]=max(dp[i-1][j], dp[i][j+1] );
            else dp[i][j]=min(dp[i-1][j], dp[i][j+1] );
        }

        else{
           if((i+j)%2 != 0) dp[i][j]=min(dp[i-1][j], dp[i][j+1] );
            else dp[i][j]=max(dp[i-1][j], dp[i][j+1] );
        }

        j++;
    }

    }

cout<<dp[n-1][0];

}

