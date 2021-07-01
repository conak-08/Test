#include <iostream>

using namespace std;

int A(int a, int b, int c, int d = 10, int e = 20);
int A(int a, int b, int c, int d, int e){
    return a + b + c + d + e;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << A(a,b,c);
}