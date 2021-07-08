#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int a[3][3],k,c=0,z=0;
for(int i=0;i<3;i++){
    cin>>s;
    for(int j=0;j<3;j++){
        if(s[j]=='X') {a[i][j]=1; c++;}
        if(s[j]=='O') {a[i][j]=2; z++;}
        if(s[j]=='.') a[i][j]=0;
    }
}
if(c+z!=9 && c>z){
    cout<<"Win";
    return 0;
}
if(c+z!=9 && c<=z){
    cout<<"Lose";
    return 0;
}
if(c+z==9) {
    for(int i=0;i<3;i++){
        k=0;
        for(int j=0;j<3;j++){
            if(a[i][j]==1) k++;
            else k--;
        }
        if(k==3){
            cout<<"Win";
            return 0;
        }
        if(k==-3){
            cout<<"Lose";
            return 0;
        }
    }
    for(int j=0;j<3;j++){
            k=0;
        for(int i=0;i<3;i++){
            if(a[i][j]==1) k++;
            else k--;
        }
        if(k==3){
            cout<<"Win";
            return 0;
        }
        if(k==-3){
            cout<<"Lose";
            return 0;
        }
    }
    if(a[1][1]==1 && a[2][2]==1 && a[3][3]==1 || a[3][1]==1 && a[2][2]==1 && a[1][3]==1){
        cout<<"Win";
        return 0;
    }
    if(a[1][1]==2 && a[2][2]==2 && a[3][3]==2 || a[3][1]==2 && a[2][2]==2 && a[1][3]==2){
        cout<<"Lose";
        return 0;
    }
    cout<<"Draw";
}
}
