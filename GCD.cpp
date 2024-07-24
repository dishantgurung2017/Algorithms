#include <iostream>
#include <stdio.h>

using namespace std;

int GCD(int m, int n){
    if(m == 0 || n == 1)
        return n;
    if(n == 0 || m == 1)
        return m;
    if(m > n){
        return GCD(m % n, n);
        //cout << 1;
    }
    else return GCD(m, n % m);
}
int main(){
    cout << GCD(15, 6);
}
