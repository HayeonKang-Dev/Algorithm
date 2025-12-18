#include <bits/stdc++.h>
using namespace std;

int ans=INT_MAX, tot; 
vector<int> v; 
void Combi(int start, vector<int> b) {
    if (b.size() == 3) {
        int tmp=0; 
        for(int a : b) tmp += v[a]; 
        ans = min(ans, abs(tmp-(tot-tmp))); 
    }
    for(int i=start+1; i<6; i++) {
        b.push_back(i); 
        Combi(i, b); 
        b.pop_back(); 
    }
}
int main() {
    // Please write your code here.
    for(int i=0; i<6; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
    }
    tot = accumulate(v.begin(), v.end(), 0); 
    vector<int> b; 
    Combi(-1, b); 
    cout<<ans; 

    return 0;
}