#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
    ll N; cin >> N;
    vector<ll> A(N);
    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }

    ll cnt = 0;
    
    for(ll i = 0; i < N; i++){
        ll minj = i;
        for(ll j = i; j < N; j++){
            if(A[j] < A[minj]){ 
                minj = j;
            }
        }
        swap(A[i],A[minj]);
        if(i != minj) cnt++;
    }

    for(ll i = 0; i < N; i++){
        if(i != N-1) cout << A[i] << " ";
        else cout << A[i] << endl;
    }

    cout << cnt << endl;

    return 0;
}