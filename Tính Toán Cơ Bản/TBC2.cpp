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
    ll a;
    double ans = 0;
    for (int i=1; i<=4;i++){
        cin >> a;
        ans +=a;
    }
    cout << setprecision(2) << fixed << ans / 4;
    return 0;
}