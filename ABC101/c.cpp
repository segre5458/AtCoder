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
    ll N,K; cin >> N >> K;
    vector<ll> A(N);
    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }

    ll cnt = 0;

    for(ll i = 0; i < 100000000; i++){
        if(i == 0) N -= K;
        else N -= K-1;

        cnt++;

        if(N <= 0) break;
    }

    cout << cnt << endl;

    return 0;
}