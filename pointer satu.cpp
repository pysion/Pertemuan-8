#include <iostream>
using namespace std;

class mahasiswa {
    public:
        int nim;
        void showNim() {
            cout << "No Induk = " << nim << endl;
        }
};

int main() {
    mahasiswa mhs ; //object mhs
    mhs.nim = 2024;
    mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.showNim();

    
}