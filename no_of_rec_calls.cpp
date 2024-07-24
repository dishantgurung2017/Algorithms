#include <iostream>
using namespace std;
int check = 0;
int F(int n){
    check++;
    if(n == 0)
       return 0;
    else if(n == 1)
        return 1;
    else return F(n - 1) + F(n - 2);
}

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    
    cout << F(n) << endl;
    cout << check;
    return 0;
}
