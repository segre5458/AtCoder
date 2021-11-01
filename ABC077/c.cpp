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
    vector<ll> B(N);
    vector<ll> C(N);
    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }
    for(ll i = 0; i < N; i++){
        cin >> B[i];
    }
    for(ll i = 0; i < N; i++){
        cin >> C[i];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    ll cnt = 0;
    for(ll i = 0; i < N; i++){
        cnt += distance(A.begin(),lower_bound(A.begin(),A.end(),B[i]))*(N-distance(C.begin(),upper_bound(C.begin(),C.end(),B[i])));
    }

    cout << cnt << endl;

    return 0;
}