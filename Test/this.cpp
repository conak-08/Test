#include <iostream>

using namespace std;

class Player
{
    public:
        int x, y, n;
        void Nhapl();
        void Xuat();
};

void Player::Nhapl()
{
    cout << "Nhap toa do x, y: ";
    cin >> this -> x >> this -> y;
    cout << "Nhap n: ";
    cin >> this -> n;
}

void Player::Xuat()
{
    cout << x << " " << y << " " << n;
}

int main() {
  Player pl;
  pl.Nhapl();
  pl.Xuat();
}