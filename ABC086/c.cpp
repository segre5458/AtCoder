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
  int N;
  cin >> N;
  vector<vector<int>> t(N + 1, vector<int>(3));
  t[0] = {0, 0, 0};
  for (int i = 1; i < N + 1; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> t[i][j];
    }
  }
  bool can = true;
  for (int i = 0; i < N; i++) {
    int d = t[i + 1][0] - t[i][0];
    int dis = abs(t[i + 1][1] - t[i][1]) + abs(t[i + 1][2] - t[i][2]);
    if (d < dis)
      can = false;
    if (dis % 2 != d % 2)
      can = false;
  }
  if (can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}