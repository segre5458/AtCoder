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
    cout << fixed << setprecision(15);
    ll N; cin >> N;
    vector<double> A(N);
    vector<double> B(N);
    for(ll i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    double sum = 0;
    for(ll i = 0; i < N; i++){
        sum += A[i]/B[i];
    }
    double ans = 0;
    double rest = sum/2;
    for(ll i = 0; i < N; i++){
        rest -= A[i]/B[i];
        if(rest > 0) ans += A[i];
        else{
            ans += (rest+A[i]/B[i])*B[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}