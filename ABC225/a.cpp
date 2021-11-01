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
    string S; cin >> S;
    if((S[0] == S[1] && S[0] != S[2]) || (S[0] == S[2] && S[0] != S[1]) || (S[1] == S[2] && S[1] != S[0])) cout << 3 << endl;
    else if(S[0] == S[1] && S[0] == S[2]) cout << 1 << endl;
    else cout << 6 << endl;
}