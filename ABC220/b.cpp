#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

ll exp(ll a,ll n){
    ll b=1;
    for(ll i = 0; i < n; i++){
        b *= a;
    }
    return b;
}

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main(){
    ll K,A,B; cin >> K >> A >> B;
    
    string a = to_string(A);
    string b = to_string(B);

    ll A10=0,B10=0;

    for(ll i = 0; i < a.size(); i++){
        ll x = ctoi(a[i]);
        A10 += x*exp(K,a.size()-i-1);
        // cout << x << endl;
    }

    for(ll i = 0; i < b.size(); i++){
        ll y = ctoi(b[i]);
        B10 += y*exp(K,b.size()-i-1);
    }

    cout << A10*B10 << endl;
    
    return 0;
}