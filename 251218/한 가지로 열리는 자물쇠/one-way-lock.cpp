#include <iostream>
using namespace std;
int n, a, b, c; 
int main() {
    // Please write your code here.
    cin>>n>>a>>b>>c; 
    int ans = n*n*n; 
    // 6 / 1 2 3
    // 4, 5, 6 (3가지) * 5 6 (2가지) * 6 (1가지) = 3*2*1 = 6 
    // n*n*n - 6 

    // 
    ans -= (max(0, a-3) + n-(a+2)) * (max(0, b-3) + n-(b+2)) * (max(0, c-3) + n-(c+2)); 
    
    cout<<ans; 
    return 0;
}