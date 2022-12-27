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
    ll n; cin >> n;
    for (int i=1; i<=n-1; i++){
        cout << i << " "  << n-i;
        return 0;
    }
    cout << 0 << " " << 0;
    return 0;
}