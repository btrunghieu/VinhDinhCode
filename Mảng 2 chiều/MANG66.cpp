//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pi pair<int, int>
#define fi first
#define se second

int a[106][106];

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    for (int j=1; j<=m; j++){
        int sum = 0;
        for (int i=1; i<=n; i++){
            sum +=a[i][j];
        }
        cout << sum << '\n';
        sum = 0;
    }
    return 0;
}