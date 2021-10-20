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
    ll N,M,X,Y; cin >> N >> M >> X >> Y;
    vector<ll> x(N+1);
    vector<ll> y(M+1);
    for(ll i = 0; i < N; i++){
        cin >> x[i];
    }
    for(ll i = 0; i < M; i++){
        cin >> y[i];
    }
    x[N] = X; y[M] = Y;

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    if(x[N] < y[0]) cout << "No War" << endl;
    else cout << "War" << endl;

    return 0;
}