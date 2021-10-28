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
    ll N,M; cin >> N >> M;
    vector<ll> L(M);
    vector<ll> R(M);
    for(ll i = 0; i < M; i++){
        cin >> L[i];
        cin >> R[i];
    }

    sort(L.begin(),L.end());
    sort(R.begin(),R.end());

    if(L[M-1] <= R[0]) cout << R[0] - L[M-1] + 1 << endl;
    else cout << 0 << endl;

    return 0;
}