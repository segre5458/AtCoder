#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
   int n; cin >> n;
   vector<vector<bool>> data(4,vector<bool>(13,false));

   for(ll i = 0; i < n; i++){
       char suit; cin >> suit;
       int num;
       if(suit == 'S') num = 0;
       if(suit == 'H') num = 1;
       if(suit == 'C') num = 2;
       if(suit == 'D') num = 3;

       int rank; cin >> rank;

       data[num][rank-1] = true;
   }
   
   for(ll i = 0; i < 4; i++){
       for(ll j = 0; j < 13; j++){
           if(data[i][j] == false){
                if(i == 0) cout << "S";
                else if(i == 1) cout << "H";
                else if(i == 2) cout << "C";
                else if(i == 3) cout << "D";

                cout << " " << j+1 << endl;
           }
       }
   }

   return 0;
}