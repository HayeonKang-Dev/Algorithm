#include <bits/stdc++.h>
using namespace std;
int N; 
string A, B; 

int main() {
    // Please write your code here.
    cin>>N>>A>>B; 
    int ans=0; 
    bool flip=false; 
    for(int i=N-1; i>=0; i--) {
        char now = A[i]; 
        if (flip) {
            now = ((now == 'G') ? 'H' : 'G'); 
        }
        if (now != B[i]) {
            ans++; 
            flip ^= 1;
        }
    }
    cout<<ans; 
    return 0;
}