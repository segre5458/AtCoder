#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    for(int i = 0; i < 1000; i++){
        int a,b; char op; cin >> a >> op >> b;

    if(op == '+') cout << a + b << endl;
    if(op == '-') cout << a - b << endl;
    if(op == '*') cout << a * b << endl;
    if(op == '/') cout << a / b << endl;
    if(op == '?') break;
    }
}