#include<bits/stdc++.h>
using namespace std;

int n;
struct Time {
long long v, s, num, ans ;
} ;

vector<Time> h;

int main(){

cin>> n ;

h.resize(n);
for(int i = 0 ; i < n ; i++){

    cin>> h[i].v >> h[i].s;
    h[i].num = i;
    h[i].ans = h[i].v*h[i].s;
}

sort(h.begin(), h.end(), []( const Time &s1, const Time &s2 ){
     return s1.s < s2.s;
      });

for(int i = 1; i < n; i++) {
        h[i].ans=max( h[i-1].ans, h[i].ans);
}

sort(h.begin(), h.end(), [](const Time &n1, const Time &n2){
     return n1.num < n2.num;
     });

for(auto q:h) cout<<q.ans<<endl;

}
