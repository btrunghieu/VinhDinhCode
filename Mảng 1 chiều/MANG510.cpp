//buitrunghieu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pi pair<int, int>
#define fi first
#define se second

bool f[10000000];
 
void sang(int x){
    for (int i=1; i<=x; i++){
        f[i] = 1;
    }
    f[0] = 0;
    f[1] = 0;
    for (int i=2; i<=sqrt(x); i++){
        if (f[i])
            for (int j=i * i; j<=x; j+=i){
                f[j] = 0;
            }
    }

}

int main(){
    //freopen("in.inp","r", stdin);
    //freopen("out.out","w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    sang(10000000);
    bool fag = false;
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;
        if (f[x]){
            fag = true;
            cout << i << " " << x << '\n';
        }
    }
    if (!fag){
        cout << "KHONG CO SO NGUYEN TO";
    }
    return 0;
}