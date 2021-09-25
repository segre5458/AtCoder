#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    long long n; cin >> n;
    vector<int> a(n);
    long long sum = 0;

    for(long long i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(),a.end());
    long long min = a[0];
    long long max = a[n-1];

    cout << min << " " << max << " " << sum << endl;

    return 0;
}