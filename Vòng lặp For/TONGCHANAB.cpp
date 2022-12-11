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
    int a, b; cin >> a >> b; unsigned long long sum = 0;
    for (int i=a; i<=b; i++){
        if (i % 2 == 0)
        sum+=i;
    }
    cout << sum;
    return 0;
}