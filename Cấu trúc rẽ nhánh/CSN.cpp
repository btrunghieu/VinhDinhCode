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
    ll p,q,r; cin >> p >> q >> r;
    long double d = (long double)(1.0 * q / p);
    if (q*d==r){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}