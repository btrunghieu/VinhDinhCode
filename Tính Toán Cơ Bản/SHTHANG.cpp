//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int, int>
#define fi first
#define se second

const long double PI = 3.14159265;

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long double a,b,c; cin >> b >> a >> c;
    long double d = (a-b) / 2;
    long double h = tan(c * PI / 180.0) * d;
    //cout << h ;
    long double huyen = sqrt(h*h+d*d);
    //cout << huyen << '\n';
    long double chuvi = a + b + (huyen * 2);
    cout << fixed << setprecision(4) << chuvi << '\n';
    long double s = h*((a+b)/2);
    cout << fixed << setprecision(4) << s;
    return 0;
}