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
    for(ll i = 0; i < 100; i++){
        for(ll j = 0; j < 100; j++){
            if(4 * i + 7 * j == N){cout << "Yes" << endl; return 0;}
        }
    }
    cout << "No" << endl;

    return 0;
}