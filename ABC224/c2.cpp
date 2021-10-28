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
    cout << fixed << setprecision(5);
    ll N; cin >> N;
    vector<double> X(N);
    vector<double> Y(N);
    for(ll i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }

    ll cnt = 0;

    for(ll i = 0; i < N-2; i++){
        for(ll j = i+1; j < N-1; j++){
            for(ll k = j+1; k < N; k++){
                if(!(X[i]==X[j] || X[i]==X[k] || X[j]==X[k]) && (((Y[i]-Y[j]) / (X[i] - X[j])) != ((Y[i]-Y[k]) / (X[i]-X[k])))) cnt++;
                else if((X[i] == X[j] && X[i] != X[k]) || (X[i] == X[k] && X[i] != X[j]) || (X[j] == X[k] && X[i] != X[j]) )cnt++;
            }
        }
    }

    cout << cnt << endl;
    

    return 0;
}