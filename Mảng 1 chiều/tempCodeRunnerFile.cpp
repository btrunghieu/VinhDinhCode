//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pi pair<int, int>
#define fi first
#define se second

int a[100];

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for (int i=2; i<=n-1; i++){
        if (a[i-1] > a[i] && a[i] < a[i+1]){
            ans ++;
        }
    }
    if (a[1]< a[2]){
        ans ++;
    }
    if (a[n] < a[n-1]){
        ans ++;
    }
    cout << ans;
    return 0;
}