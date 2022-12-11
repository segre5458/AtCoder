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
  std::string S;
  cin >> S;
  vector<string> devide{"dream", "dreamer", "erase", "eraser"};
  reverse(S.begin(), S.end());
  for (auto &value : devide)
    reverse(value.begin(), value.end());
  bool can = false;
  for (int i = 0; i < (int)S.size();) {
    can = false;
    for (auto value : devide) {
      if (S.substr(i, value.size()) == value) {
        can = true;
        i += value.size();
        break;
      }
    }
    if (!can) {
      break;
    }
  }
  if (can)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}