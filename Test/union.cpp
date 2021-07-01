#include <iostream>

using namespace std;

int main() {
  union{
    unsigned long u;
    unsigned char b[4];
  };
  u = 0xff414141;
  cout << u << endl;
  for(int i = 0; i < 4; i++){
    cout << " " << b[1];
  }
  
}