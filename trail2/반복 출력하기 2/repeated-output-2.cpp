#include <bits/stdc++.h>
using namespace std;
int N; 
void go(int n) {
    if (n >= N) return; 

    go(n+1); 
    cout<<"HelloWorld\n"; 
}
int main() {
    // Please write your code here.
    cin>>N; 
    go(0); 
    return 0;
}