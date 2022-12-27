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
    ll a, b;
    cin >> a >> b;
    if (a != 0){
        cout << "PT CO NGHIEM" << '\n';
        cout << "X = ";
        cout << setprecision(2) << fixed<<(long double) (1.0 * -b/a);
    } else if (a == 0 && b !=0){
        cout << "VO NGHIEM";
    } else {
        cout <<"VO SO NGHIEM";
    }
    return 0;
}