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
    long double a, b; cin >> a >> b;
    int res = 0;
    while (a<b){
        a *=11;
        a /=10;
        a = round(a);
        res++;
    }
    cout << res;
    return 0;
}