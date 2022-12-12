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
    ll sum = 0;
    while (n>0){
        sum += n % 10;
        n /= 10;
    }
    if (sum%10 == 9){
        cout << "YES"; 
    }else cout << "NO";
    return 0;
}