#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll sum_h = 0;
    ll data[n];
    for (ll i=0;i<n;i++){
        cin >> data[i];
        sum_h += data[i];
    }
    ll ans = 0;
    for (ll i=0;i<n;i++){
        ans += (sum_h-data[i])*data[i];
    }
    cout << ans/2 << endl;
}
