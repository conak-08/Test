#include <iostream>

using namespace std;

int main() {
    int a = 30;
    int *p = &a;
    p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << *&a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *&p << endl;
    cout << *p + 5 << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(a).name() << endl;
}