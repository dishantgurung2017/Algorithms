//Provide a recursive algorithm to enumerate all possible ways of expressing a given number N as a sum of 1s and 2s.


#include <iostream>
#include <stdio.h>

using namespace std;

int Fib(int n){
    int n1 = 1;
    int n2 = 1;
    int n3 = 0;
    int i = 1;
    if(n <= 1)
       return 1;
    while(i != n){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i++;
    }
    return n3;
}

int ways(int N){ 
    int n1 = 1;
    int n2 = 2;
    int n3 = 0;
    int i = 3;
    if(N == 1)
        cout << 1;
    else if(N == 2)
        cout << 2;
    else{
        while(i <= N){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            i++;
        }
    } 
    return n3;
}

int main(){
    cout << ways(3);
}
