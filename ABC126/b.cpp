#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <cstdlib>
#include <queue>
#include <set>
typedef long long ll;
using namespace std;

int main() {
    string S; cin >> S;
    int former = stoi(S.substr(0,2));
    int later = stoi(S.substr(2,4));
    bool f1 = false, f2 = false;
    if(1 <= former && former <= 12) f1 = true;
    if(1 <= later && later <= 12) f2 = true;
    if(f1 && f2) cout << "AMBIGUOUS" << endl;
    else if(f1) cout << "MMYY" << endl;
    else if(f2) cout << "YYMM" << endl;
    else cout << "NA" << endl;
    return 0;
}