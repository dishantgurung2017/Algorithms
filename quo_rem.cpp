//Given two positive integers a and b, write an iterative algorithm to determine the quotient and remainder when a is divided by b. You should write a while loop and should not use the division and remainder operators. 
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a = 18, b = 4, i = 1, diff = a, prod;
    while(diff >= b){
        prod = b * i;
        i++;
        diff = a - prod;
    }
    cout << "Quotient is " << i - 1 << endl;
    cout << "Remainder is " << a - prod;
}
