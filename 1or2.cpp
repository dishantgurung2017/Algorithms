//Provide a recursive algorithm to enumerate all possible ways of expressing a given number N as a sum of 1s and 2s.
#include <iostream>
#include <stdio.h>

using namespace std;

int ways(int N){
    if(N == 1)
       return 1;
    else if(N == 2)
       return 2;
    else return ways(N - 1) + ways(N - 2);
}

int main(){
    cout << ways(6);
}
