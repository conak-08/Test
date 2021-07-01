#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int *age = new int[n];
    cout << "Nhap n:"; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap tuoi: ";
        cin >> age[i];
    }
    for(int i = 0; i < n; i++){
        cout << age[i] << endl; 
    }
    delete[] age;
    if(age == NULL){
        cout << "Loi";
    } else {
        for(int i = 0; i < n; i++){
            cout << age[i] << endl; 
        }   
    }
    
}