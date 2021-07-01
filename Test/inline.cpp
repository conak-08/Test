#include <iostream>

using namespace std;

inline int S(int a, int b){
    cout << a + b << endl;
    cout << a - b;
}

int main() { 
    S(3,2);
}