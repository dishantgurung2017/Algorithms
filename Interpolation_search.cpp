#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
       vector<int> A = {3, 4, 5, 6, 7, 8, 9, 10, 11};
       int l = 0;
       int r = A.size() - 1;
       
       int x;
       cout << "Enter a number: ";
       cin >> x;

       while(l <= r){
            int exp = (r - l)/(A[r] - A[l]);
            int j = exp * (x - A[l]) + l;
            if(j <= r && j >= l){
                if(A[j] < x){
                  l = j + 1;
                }
                else if(A[j] > x)
                    r = j - 1;
                else {
                    cout << x << " is present in index " << j;
                    return 0;
                }
            }
            else break;
       }
       cout << x << " is not present";

}
