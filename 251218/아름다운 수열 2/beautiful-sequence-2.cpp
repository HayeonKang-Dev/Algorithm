#include <bits/stdc++.h>
using namespace std;
int n, m; 
vector<int> v; 
vector<int> v2; 
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
    }
    for(int i=0; i<m; i++) {
        int a; 
        cin>>a; 
        v2.push_back(a); 
    }
    int ans=0;
    sort(v2.begin(), v2.end()); 
    do{
        for(int i=0; i<=n-m; i++) { // 시작점 
            bool flag = false; 
            int p=0;
            for(int j=i; j<i+m; j++) { // 구간 탐색 
                if (v[j] != v2[p++]) {
                    flag = true; 
                    break; 
                }
            }
            if (!flag) ans++; 
        }
    }while(next_permutation(v2.begin(), v2.end())); 
    cout<<ans; 
    return 0;
}