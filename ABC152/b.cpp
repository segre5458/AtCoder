#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string a,b; cin >> a >> b;
    string c = a;
    string d = b;
    
    for (int i = 0; i < stoi(d)-1; i++) a += c;
    for (int i = 0; i < stoi(c)-1; i++) b += d;
    if(a <= b) cout << a;
    else if(a > b) cout << b;
}