#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string a = "Hello";
  cout << setiosflags(ios::showpoint) << setprecision(10);
  cout << setw(10) << "ab" << " cd";
  // cout << setw(20) << a;
}