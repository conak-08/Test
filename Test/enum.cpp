#include <iostream>

using namespace std;

enum {
  a = 10, b, c , d
};

int main() {
  int n, m;
  n = a;
  m = c;
  cout << a << endl;
    cout << b << endl;
      cout << c << endl;
        cout << d << endl;

  cout << n + m;
}