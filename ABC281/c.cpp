#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
  ll N, T;
  cin >> N >> T;
  vector<ll> A(N);
  for (ll i = 0; i < N; i++)
    cin >> A[i];
  ll sum = 0;
  for (auto value : A)
    sum += value;
  ll p = T % sum;
  for (ll i = 0; i < N; i++) {
    if (p < A[i]){
      cout << i + 1 << " " << p << endl;
      break;
    }
    else
      p -= A[i];
  }
  return 0;
}