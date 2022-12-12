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
    ll n; cin >> n;
    ll s= 0;
    ll i = 1;
    while (s<n){
        s += i;
        i+=2;
    }
    cout << s;
    return 0;
}