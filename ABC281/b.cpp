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
  string s;
  cin >> s;
  bool flg = true;
  if(s.size() != 8) flg = false;
  if(!isupper(s[0])) flg = false;
  for(int i=0; i<6; i++){
    if(!isdigit(s[i+1])) flg = false;
  }
  if(s[1] - '0' == 0) flg = false;
  if(!isupper(s[7])) flg = false;
  if(flg) cout << "yes" << endl;
  else cout << "no" << endl;
  return 0;
}