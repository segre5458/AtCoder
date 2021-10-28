#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main() {
    int K,X; cin >> K >> X;
    if(500*K >= X) cout << "Yes";
    else cout << "No";
}