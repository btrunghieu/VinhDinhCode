//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int, int>
#define fi first
#define se second

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n; 
    while (n--){
        unsigned long long x, y, u, v, t;
        cin >> x >> y >> u >> v >> t;
        if (u>v) u = min(u, v+t); else v = min(v, u+t);
        unsigned long long ans = x*u + y * v;
        cout << ans  << '\n'; 
    }
    return 0;
}