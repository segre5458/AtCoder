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

    ll max = 0;

    for(ll i = 0; i < N; i++){
        for(ll j = i+1; j < N; j++){
            if(abs(A[i]-A[j]) > max) max = abs(A[i]-A[j]);        
        }
    }

    cout << max << endl;

    return 0;
}