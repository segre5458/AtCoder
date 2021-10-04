#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>

int main(){
    int top,S[1000];
    top = 0;
    int a =0;
    char s[1000];
    while(scanf("%s",s) != EOF){
        std::cout << s[0];
        // if(s[1] == '+') std::cout << "ok";
        std::cout << atoi(s) << std::endl;
    } 
}