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
    vector<ll> R(n);
    for(ll i=0; i<n; i++) cin >> R[i];

    ll maxv = -10000000001;
    ll minv = R[0];

    for(ll i=0; i<n; i++){
        maxv = max(maxv,R[i]-minv);
        minv = min(minv,R[i]);
    }

    cout << maxv << endl;

    return 0;
}