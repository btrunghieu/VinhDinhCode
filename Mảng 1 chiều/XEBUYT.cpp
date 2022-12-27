//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
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
    ll now = 0;
    ll ans = 0;
    for (int i=1; i<=n; i++){
        ll x, y; cin >> x >> y;
        now -= x;
        now+=y;
        ans = max(ans, now);
    }
    cout << ans;
    return 0;
}