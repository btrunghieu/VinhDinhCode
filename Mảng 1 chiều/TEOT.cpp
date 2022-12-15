//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pi pair<int, int>
#define fi first
#define se second

int a[10000];

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin >> n;
    for (int i=1;i<=n; i++){
        cin >> a[i];
    }
    sort(a+1, a+1 + n);
    if (n%2==0){
        cout << a[n/2];
    } else{
        cout << a[n/2+1];
    }
    return 0;
}