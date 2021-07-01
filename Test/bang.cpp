#include <iostream>
#include <iomanip>

using namespace std;

void Xuat()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << setw(5) << i * 10 + j << " ";
        }
        cout << endl;
    }
}

int main()
{
    Xuat();
}