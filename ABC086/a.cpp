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
    ll a,b; cin >> a >> b;
    if(a*b % 2 == 0){
        cout << "Even" << endl;
    }
    else cout << "Odd" << endl;
    return 0;
}