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
    string s; getline(cin, s);
    int ans = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i]-'0' >= 0 && s[i]-'0' <=9){
            ans++;
        }
    }
    cout << ans;
    return 0;
}