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
    ll a,b,c,d,x; cin >> a >> b >>c >> d >> x;
    cout << a * x *x *x + b * x * x + c * x + d;
    return 0;
}