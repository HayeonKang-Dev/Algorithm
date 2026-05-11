#include <bits/stdc++.h>
using namespace std;
int N, M; 
struct Node {int w, v; double p; };

vector<Node> v; 
int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        int a, b; 
        cin>>a>>b; 
        v.push_back({a, b, (double)b/a}); 
    }
    sort(v.begin(), v.end(), [](Node &a, Node &b) {
        return a.p > b.p; 
    }); 
    double ans=0; 
    int cnt=0; 
    for(int i=0; i<N; i++) {
        if (cnt == M) break; 
        int target = min(M-cnt, v[i].w); // 채워야하는 양 
        ans += v[i].p * target;
        cnt += target; 
        // cout<<ans<<" -> "; 
    }
    cout<<fixed<<setprecision(3); 
    cout<<ans; 

    return 0;
}