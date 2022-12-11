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

int main() {
    string str; cin >> str;

    int res = 0;
    for(int i=0; i<(int)str.size(); i++){
        if(str.at(i) == '1') res++;
    }
    cout << res << endl;

    return 0;
}   