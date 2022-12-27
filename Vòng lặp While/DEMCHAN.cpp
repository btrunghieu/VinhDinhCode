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
    long long a, b;
    cin >> a >> b;
    long long left = (a / 6) * 6;
    if (a % 6 != 0) left +=6;
    long long right = (b / 6) * 6;
    cout << (right/6 - left/6) + 1;
    return 0;
}