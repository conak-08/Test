#include <iostream>

using namespace std;

int sum(int a, int b, int c){
    return a + b + c;
}

int main() {
    // int (*f1)(int,int,int);
    // f1 = sum;
    // cout << *&f1;
    cout << sum(1,3,4);
}