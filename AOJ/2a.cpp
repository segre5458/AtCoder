#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    if(a < b) cout << "a < b"<< endl;
    else if(a > b) cout << "a > b" << endl;
    else if(a == b) cout << "a == b"<< endl;

    return 0;
}