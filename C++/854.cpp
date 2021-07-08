#include<bits/stdc++.h>
using namespace std;
int main(){
int t_room,t_wish,t;
string s;
cin>>t_room>>t_wish;
cin>>s;
if(s=="freeze"){
    if(t_room<t_wish) t=t_room;
    else t=t_wish;
    cout<<t;
    return 0;
}
if(s=="heat"){
    if(t_room>t_wish) t=t_room;
    else t=t_wish;
    cout<<t;
    return 0;
}
if(s=="auto"){
    cout<<t_wish;
    return 0;
}
if(s=="fan") cout<<t_room;
}
