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
    int N; cin >> N;
    vector<int> d(N);
    for(int i=0; i<N; i++) cin >> d[i];
    set<int> se;
    for(int i=0; i<N; i++) se.insert(d[i]);
    cout << se.size() << endl; 
    return 0;
}