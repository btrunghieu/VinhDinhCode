//buitrunghieu
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES

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
    long double h, r; cin >> h >> r;
    cout << setprecision(3) << fixed << (r*r*h*M_PI) / 3;
    return 0;   
}