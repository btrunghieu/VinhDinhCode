//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int, int>
#define fi first
#define se second
string a[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    n -=2;
    cout << a[n];
    return 0;
}