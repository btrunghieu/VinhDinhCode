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
    ll a,b,c; cin >> a >> b >> c;
    if (a+ b < c || a + c < b || b + c < a){
        cout << 0;
        return 0;
    }
    long double p = (long double)(1.0*(a+b+c) / 2);
    long double ans = sqrt(p*(p-a) * (p-b) * (p-c));
    cout << setprecision(2) << fixed << ans;
    return 0;
}