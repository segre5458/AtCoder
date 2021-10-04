#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

struct Card { char suit, value;};

void BubbleSort(struct Card A[],ll N){
    bool flag = 1;
    for(ll i = 0; flag; i++){
        flag = 0;
        for(ll j = N-1; j >= 1; j--){
            if(A[j].value < A[j-1].value){
                Card t = A[j]; A[j] = A[j-1]; A[j-1] = t;
                flag = 1;
            }
        }
    }
}

void SelectionSort(struct Card A[], ll N){
    for(ll i=0; i<N; i++){
        ll minj = i;
        for(ll j = i; j < N; j++){
            if(A[j].value < A[minj].value) minj = j;
        }
        Card t = A[i]; A[i] = A[minj]; A[minj] = t;
    }
}

void print(struct Card A[],int N){
    for(ll i = 0; i < N; i++){
        if(i > 0) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

bool isStable(struct Card A[],struct Card B[],ll N){
    for(ll i = 0; i < N; i++){
        if(A[i].suit != B[i].suit) return false;
    }
    return true;
}

int main(){
    Card C1[100],C2[100];
    ll N; cin >> N;

    for(ll i = 0; i < N; i++){
        cin >> C1[i].suit >> C1[i].value;
    }

    for(ll i = 0; i < N; i++){
        C2[i] = C1[i];
    }

    BubbleSort(C1,N);
    SelectionSort(C2,N);

    print(C1,N);
    cout << "Stable" << endl;
    print(C2,N);
    if(isStable(C1,C2,N)){
        cout << "Stable" << endl;
    }
    else cout << "Not stable" << endl;

    return 0;
    
}