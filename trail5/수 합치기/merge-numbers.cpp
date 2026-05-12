#include <bits/stdc++.h>
using namespace std;
int N; 


int main() {
    // Please write your code here.
    cin>>N; 
    priority_queue<int, vector<int>, greater<int>> A; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        A.push(a); 
    }
    int ans=0; 
    while(A.size() >= 2) {
        int x= A.top(); A.pop(); 
        int y = A.top(); A.pop(); 
        ans += (x+y); 
        A.push(x+y); 
    }
    cout<<ans; 

    return 0;
}