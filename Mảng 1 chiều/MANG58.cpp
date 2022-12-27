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
    int n, k; cin >> n >> k;
    bool reg = false;
    for (int i=1; i<=n; i++){
        int x; cin >> x ;
        if (!reg && x==k){
            cout << "CO K O VI TRI " << i << '\n';
            reg = true;
        }
    }
    if (!reg){
        cout << "KHONG CO K";
    }
    return 0;
}