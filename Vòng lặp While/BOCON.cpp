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
    long double a, b; cin >> a >> b;
    long double res = ((a / 2) - b) * 2; 
    long long ans = (long long) 1LL * res;
    cout << ans ;
    return 0;
}