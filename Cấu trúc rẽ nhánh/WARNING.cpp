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
    long double a, b , k, t; cin >> a >> b >> k >> t;
    k /= 100;
    long double time = (a*b) / 3;
    if (t / time >= k){
        cout << "WARNING";
    }  else {
        cout << "YES";
    }
    return 0;
}