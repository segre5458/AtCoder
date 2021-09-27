#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll x; cin >> x;

    ll sum = 0;
    for(ll val:a) sum+=val;
    ll p = x / sum;
    ll sumb = p*sum;
    ll ans = p*n;

    for(ll val:a){
        sumb += val;
        ans++;
        if(sumb > x){
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}