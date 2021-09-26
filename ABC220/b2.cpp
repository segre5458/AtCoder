#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

ll tode(ll k,ll n){
    ll decimal = 0;
    ll base = 1;

    while(n > 0){
        decimal += (n % 10) * base;
        n /= 10;
        base *= k;
    }

    return decimal;
}

int main(){
    ll K,A,B; cin >> K >> A >> B;

    cout << tode(K,A)*tode(K,B) << endl;
    
    return 0;
}