#include <iostream>
using namespace std;
int n, a, b, c; 
int main() {
    // Please write your code here.
    cin>>n>>a>>b>>c; 
    int ans=0; 
    // 6 / 1 2 3
    // 4, 5, 6 (3가지) * 5 6 (2가지) * 6 (1가지) = 3*2*1 = 6 
    // n*n*n - 6 
    // 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            for(int k=1; k<=n; k++) {
                if (abs(a-i) <= 2 || abs(b-j) <= 2 || abs(c-k) <= 2) ans++; 
            }
        }
    } 
    
    cout<<ans; 
    return 0;
}