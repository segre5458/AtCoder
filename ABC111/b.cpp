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
    for(ll i = N; i < 1000; i++){
        if(i % 111 == 0){cout << i << endl; break;}
    }

    return 0;
}