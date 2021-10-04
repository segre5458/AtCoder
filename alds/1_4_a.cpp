#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <cstdlib>
#include <queue>
typedef long long ll;
using namespace std;

int main(){
    ll n; cin >> n;
    vector<ll> S(n);
    for(ll i=0; i<n; i++) cin >> S[i];
    
    ll q; cin >> q;
    vector<ll> T(q);
    for(ll i=0; i<q; i++) cin >> T[i];

    ll C = 0;

    for(auto value:S){
        for(ll i = 0; i < q; i++){
            if(value == T[i]) C++;
        }
    }

    cout << C << endl;

    return 0;
}