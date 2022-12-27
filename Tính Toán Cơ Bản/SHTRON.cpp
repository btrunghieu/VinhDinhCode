//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int, int>
#define fi first
#define se second
#define _USE_MATH_DEFINES

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll r; cin >> r;
    long double ans = r * r * M_PI;
    cout << setprecision(0) << fixed << ans;
    return 0;
}