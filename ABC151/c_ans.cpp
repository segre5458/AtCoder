#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N,M; cin >> N >> M;
    vector<int> WA(N,0);
    vector<bool> AC(N,false);

    int WAnum=0,ACnum=0;
    
    for(int i = 0; i < M; i++){
        int p; string S;
        cin >> p >> S;

        if(AC[p-1]) continue;

        if(S == "AC"){
            ACnum++;
            AC[p-1] = true;
            WAnum += WA[p-1];
        } else if(S == "WA") WA[p-1]++;
    }
    cout << ACnum << " " << WAnum << endl;
    return 0;
}
