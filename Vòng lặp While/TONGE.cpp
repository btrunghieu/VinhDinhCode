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
    long double n; cin >> n;
    long double i = 3;
    long double mau = 1;
    long double res =0;
    while (res < n){
        res +=1 / mau;
        mau +=i;
        i+=2;
    }
    cout << fixed << setprecision(9) <<  res;
    return 0;
}