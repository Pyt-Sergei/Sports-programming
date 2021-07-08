#include<bits/stdc++.h>

using namespace std;

map<int, int> m;
vector<int> v;
int n,a;

int main(){

cin>>n;
for(int i=0; i<n; i++){

    cin>>a;
    m[a]++;

}

for(auto q : m) v.push_back(q.second);
sort(v.rbegin(), v.rend());

if(v[0] == v[1]) cout<<0;
else for ( auto q: m) if(q.second == v[0]) return cout<<q.first, 0;
}
