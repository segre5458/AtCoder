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
    vector<ll> A(n);
    for(ll i =0; i<n; i++) cin >> A[i];

    for(ll j=0; j<n; j++){
        if(j != n-1) cout << A[j] << " ";
        else cout << A[j] << endl;
    }
    
    ll v = 0,j = 0;
    for(ll i = 1; i < n; i++){
        v = A[i];
        j = i-1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        for(ll j=0; j<n; j++){
            if(j != n-1) cout << A[j] << " ";
            else cout << A[j] << endl;
        }
    }
    return 0;
}