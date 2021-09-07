#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N,M; cin >> N >> M;

    vector<int> num(M);
    vector<string> result(M);
    vector<bool> AC(N,false);

    for(int i = 0; i < M; i++){
        cin >> num[i];
        cin >> result[i];
    }

    int sumAC = 0;
    int sumPN = 0;

    for(int i = 0; i < N; i++){
        if(!AC[i]){
        for(int j = 0; j < M; j++){
            if(num[j] == i+1 && result[j] == "WA") sumPN++;
            if(num[j] == i+1 && result[j] == "AC"){
                AC[i] = true;
                sumAC++;
            }
        }
        }
    }   
    cout << sumAC << " " << sumPN << endl;
    return 0;    
}
