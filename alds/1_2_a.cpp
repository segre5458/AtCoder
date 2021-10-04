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

    bool flag = true;
    ll cnt = 0;

    while(flag){
        flag = false;
        for(ll i=N-1; i>=1; i--){
            if(A[i] < A[i-1]){
                swap(A[i-1],A[i]);
                flag = true;
                cnt++;
            }
        }
    }

    for(ll i = 0; i < N; i++){
        if(i != N-1) cout << A[i] << " ";
        else cout << A[i] << endl;
    }

    cout << cnt << endl;
}