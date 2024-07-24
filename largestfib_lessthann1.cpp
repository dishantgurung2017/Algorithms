//Find the largest Fibonacci number less than a given number ‘n’ assuming:
//No such list is available
#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 1;
    int F = 0;
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    while(F < n){
        F = a + b;
        a = b;
        b = F;
    }
    cout << a;
}
