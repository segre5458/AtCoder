#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int res = 0;
  for (int i = 1; i <= N; i++) {
    string str = to_string(i);
    int sum = 0;
    for (int j = 0; j < str.size(); j++) {
      sum += str[j] - '0';
    }
    if (A <= sum && sum <= B) {
      res += i;
    }
  }
  cout << res << endl;
  return 0;
}