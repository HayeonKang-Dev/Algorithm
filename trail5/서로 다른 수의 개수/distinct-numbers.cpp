#include <bits/stdc++.h>
using namespace std;
int N; 
unordered_map<int, int> um; 
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        um[a] = 1; 
    }
    cout<<um.size(); 
    return 0;
}