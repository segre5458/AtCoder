#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    for(ll i = 0; i < n; i++){
        if(i != n-1) cout << a[n-i-1] << " ";
        else cout << a[n-i-1] << endl;
    }

    return 0;
}