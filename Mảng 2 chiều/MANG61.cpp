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
    int n, m;cin >> n >> m;
    int ans = 0;
    for (int i=1; i<=n*m; i++){
        int x; cin >> x;
        if (x % 3 == 0){
            ans ++;
        }
    }

    return 0;
}