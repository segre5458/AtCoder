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
    vector<ll> A(N);
    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }
    
    ll ans = 1e15;
    for(ll bit = 0; bit < (1 << N-1); bit++){
        ll cnt = 0,temp = 0;
        for(ll i = 0; i < N-1; i++){
            if(bit & (1 << i)) {cnt++;}
        }
        
        ll j = 0;
        vector<ll> sumor(cnt+1,0);
        for(ll i = 0; i < N; i++){
            sumor[j] |= A[i];
            if(i < N-1 && bit & (1 << i)) j++;
        }
        // for(ll i = 0; i < cnt+1; i++){
        //     cout << sumor[i] << " ";
        // }
        for(ll i = 0; i < cnt+1; i++){
            temp ^= sumor[i];
        }
        // cout << temp << endl;
        
        ans = min(ans,temp);
    }

    cout << ans << endl;
    return 0;
}