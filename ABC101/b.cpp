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
    ll sum = 0;
    for(ll i = 0; i < S.size(); i++){
        sum += (ll)(S[i] - '0');
    }

    if(N % sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}