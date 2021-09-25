#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> n(3);
    for(int i = 0; i < n.size(); i++){
        cin >> n[i];
    }
    sort(n.begin(),n.end());
    for(int i = 0; i < n.size(); i++){
        if(i != sizeof(n)-1) cout << n[i] << " ";
        else cout << n[i] << endl;
    }
    return 0;
}