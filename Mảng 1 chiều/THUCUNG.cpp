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
    int a[n+6];
    int max = INT_MIN;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (a[i] > max){
            max = a[i];
        }
    }
    ll res = 0;
    for (int i=1; i<=n; i++){
        res +=max-a[i];
    }
    cout << res;
    return 0;
}