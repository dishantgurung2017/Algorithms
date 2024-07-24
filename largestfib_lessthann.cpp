//Find the largest Fibonacci number less than a given number ‘n’ assuming:
//A list of Fibonacci numbers is available
#include <stdio.h>
#include <list>
#include <iostream>
#include <vector>
using namespace std;

int largestFibonacciLessThanN(vector<int>& fibList, int n) {
    int l = 0;
    int r = fibList.size() - 1;
    int result = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (fibList[m] < n) {
            result = fibList[m];  
            l = m + 1;        
        } else {
            r = m - 1;       
        }
    }

    return result;
}



int main(){
   vector<int> fibList = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946};

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = largestFibonacciLessThanN(fibList, n);
    if (result != -1) {
        cout << "The largest Fibonacci number less than " << n << " is " << result << endl;
    } else {
        cout << "No Fibonacci number is less than " << n << endl;
    }

    return 0;
}
