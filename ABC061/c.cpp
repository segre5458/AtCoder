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
    ll N, K, a, b; cin >> N >> K;
    vector<ll> num(1e5+1,0);
    for(ll i = 0; i < N; i++){
        cin >> a >> b;
        num[a] += b;
    }

    ll sum = 0;

    for(ll i = 0; i < 1e5+1; i++){
        sum += num[i];
        if(K <= sum){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}