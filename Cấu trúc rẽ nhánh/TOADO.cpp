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
    unsigned long long x, y, a, b; cin >> x >> y >> a >>b; 
    if (a*a + b *b == x*x + y*y){
        cout << "BANG NHAU";
    } else if (a*a + b *b < x*x + y*y){
        cout << "B";
    } else {
        cout << "A";
    }
    return 0;
}