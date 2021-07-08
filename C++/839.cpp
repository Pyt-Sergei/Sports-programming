#include<bits/stdc++.h>
using namespace std;                 //можно решать через char и файлы
int main(){
string c;
cin>>c;
for(int i=0;i<c.length();i++){
    if(c[i]=='0'){
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
}
