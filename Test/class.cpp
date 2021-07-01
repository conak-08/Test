#include <iostream>
#include <iomanip>

using namespace std;

// class Foo{
//     private:
//         int n;
//     public:
//         void Nhap();
//         void Xuat();
// };
// void Foo::Nhap()
// {
//     cin >> n;
// }
// void Foo::Xuat(){
//     cout << n << endl;
// }

// class New{
//     public:
//         int n = 3;
//         int m = 5;
// };

class Name
{
    public:
        string name[100];
        void Nhap(int n);
        void Xuat(int n);
        
};

void Name::Nhap(int n)
{
    // for(int i = 0, i < n, i++)
    // {
    //     cin.ignore();
    //     getline(cin, name[i]);
    // }
    int i = 1;
    cin.ignore();
    while(i <= n)
    {   
        cout << "STT " << i << ": ";
        getline(cin, name[i]);
        i++;
    }
}

void Name::Xuat(int n)
{
    // for(int i = 0, i < n, i++)
    // {
    //     cout << name[i] << endl;
    // }
    int i = 1;
    while(i <= n){
        cout << "STT" << ": " << i << setw(30) << name[i] << endl;
        i++;
    }
}

int main() {
    // Foo f;
    // f.Foo::Nhap();
    // f.Foo::Xuat();

    // New *p;
    // New N;
    // p = &N;
    // cout << p << endl;
    // cout << *&p << endl;
    // cout << &N << endl;
    // cout << &p << endl;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Name ne;
    ne.Name::Nhap(n);
    ne.Name::Xuat(n);

    return 0;
}