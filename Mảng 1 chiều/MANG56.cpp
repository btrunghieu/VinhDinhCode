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
    ll sum = 0;
    for (int i=1; i<=n; i++){
        ll x; cin >> x;
        if (x % 2 == 0 & i %2 ==1){
            sum +=x;
        }
    }
    cout << sum;
    return 0;
}