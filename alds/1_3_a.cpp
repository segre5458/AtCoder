#include <iostream>
#include <istream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
using namespace std;

int top,S[1000];

void push(int x){
    S[++top] = x;
}

int pop(){
    top--;
    return S[top+1];
}

int main(){
    int a,b;
    top = 0;
    char s[100];

    while(cin >> s){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a + b);
        }
        else if(s[0]  == '-'){
            b = pop();
            a = pop();
            push(a - b);
        }
        else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a*b);
        }
        else{
            push(atoi(s));
        }
    // printf("%d",s[0]);
    // printf("%d",S[1]);
    }

    printf("%d\n",pop());
    // printf("%lld",S[0]);

    return 0;
}