#include <iostream>
#include <cmath>

using namespace std;

int aBs(int n){
    return abs(n);
}
void aBs(float n, int m){
    cout << abs(n) << endl;
    cout <<  abs(m) << endl;
}

int main() {
    cout << aBs(-44) << endl;
}