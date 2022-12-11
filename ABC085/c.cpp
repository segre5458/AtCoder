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
  int N, Y;
  cin >> N >> Y;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      // 10000:N-i-j 5000:j 1000:i
      if (1000 * i + 5000 * j + 10000 * (N - i - j) == Y) {
        cout << N - i - j << " " << j << " " << i << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}