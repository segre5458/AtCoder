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
    ll N; cin >> N;
    string S = to_string(N);

    ll ans = 100000;

    for(ll bit = 0; bit < (1 << S.size()); bit++){
        ll sum = 0;
        ll cnt = 0;
        for(ll i = 0; i < S.size(); i++){
            if(bit & (1 << i)){
                sum += (ll)(S[i]-'0');
                cnt++;
            }
        }
        // cout << sum << " " << cnt << endl;
        if(sum != 0 && sum % 3 == 0 && S.size() - cnt< ans) ans = S.size() - cnt;
    }

    if(ans == 100000) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}