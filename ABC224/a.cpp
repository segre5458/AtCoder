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
    if(S[S.size()-2] == 'e' && S[S.size()-1] == 'r') cout << "er" << endl;
    if(S[S.size()-3] == 'i' && S[S.size()-2] == 's' && S[S.size()-1] == 't') cout << "ist" << endl;

    return 0;
}