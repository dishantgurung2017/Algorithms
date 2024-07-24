//(Greedy Strategy) Develop an algorithm to find a unique representation of a number using the Fibonacci sequence.
#include <iostream>
using namespace std;

int large_Fib(int n){
   int a = 1;
    int b = 1;
    int F = 0;

    while(F < n){
        F = a + b;
        a = b;
        b = F;
    }
    return a;

}

int main(){
    
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int i;
    cout << n << " can be represented by adding following Fibonacci numbers:\n";
    while(n > 0){
        i = large_Fib(n);
        cout << i << endl;
        n = n - i;
    }

    return 0;
}
