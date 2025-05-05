#include <iostream>
using namespace std;

int main() {

    //dereference
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a;
    cout << "Alamat Memori : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;
    c = &y;
    cout << "Alamat Memori : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;

    // reference 
    int &d = b;
    cout << "Nilai " << d << endl;
    cout << "Reference " << &d << endl;

    int f = 5;
    int g = f;

}