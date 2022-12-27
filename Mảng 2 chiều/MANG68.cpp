//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pi pair<int, int>
#define fi first
#define se second

int a[1000006];

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;cin >> n >> m;
    int index = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            index ++;
            cin >> a[index];
        }
    }
    sort(a+1, a+1+index);
    index = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            index ++;
            cout << a[index] << " ";
        }
        cout << '\n';
    }
    return 0;
}